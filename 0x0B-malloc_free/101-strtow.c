#include "main.h"

/**
 * word_count - evaluates the numbers of words in the string
 * @str: given string to check
 *
 * Description:
 * Return: integer
 */
int word_count(char *str)
{
	int len, i;

	i = len = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'
				|| str[i + 1] == '.'))
			len++, i++;
		i++;
	}
	return (len);
}
/**
 * word_size - evaluates the length of each word in the given string
 * @str: pointer to the given string
 * @words: number of words in the given string
 *
 * Return: integer
 */
int *word_size(char *str, int words)
{
	int i, word, count, *each_word_len;

	each_word_len = malloc(words * sizeof(int));
	if (each_word_len == NULL)
		return (NULL);
	i = word = 0;
	while (word < words)
	{
		if (str[i] != ' ')
		{
			count = 0;
			while (str[i] != ' ')
				count++, i++;
			count++;
			each_word_len[word] = count;
			i++;
		}
		word++;
	}
	return (each_word_len);
}
/**
 * **strtow -splits a string into words and return a pointer to the strings
 * @str: pointer to the string to be split
 *
 * Description:
 * Return: character
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j, k, word_counter, words, *each_word_len;

	words = word_count(str);
	if (str == NULL || words == 0)
		return (NULL);
	each_word_len = malloc(words * sizeof(int));
	if (each_word_len == NULL)
		return (NULL);
	each_word_len = word_size(str, words);
	ptr = malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = j = k = 0;
	while (i < words && str[j] != '\0')
	{
		word_counter = i;
		ptr[i] = malloc(each_word_len[i] + sizeof(char));
		if (ptr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		while (str[j] != '\0' && i == word_counter)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					ptr[i][k] = str[j];
					j++, k++;
				}
				ptr[i][k] = '\0';
				i++;
				k = 0;
			}
			j++;
		}
	}
	ptr[i] = NULL;
	free(each_word_len);
	return (ptr);
}
