#include "main.h"

/**
 * _strlen - evaluates the length of a string
 * @str: given string to find the length
 *
 * Return: integer
 */
int _strlen(char *str)
{
	unsigned int i, len;

	i = len = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be concatenated to s1
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j, len2;
	int i, len1;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc((len1 + n) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (n < len2)
		{
			while (j < n)
			{
				ptr[i] = s2[j];
				i++, j++;
			}
			return (ptr);
		}
		if (n >= len2)
		{
			for (j = 0; j < len2; j++)
			{
				ptr[i] = s2[j];
				i++;
			}
			return (ptr);
		}
	}
	return (ptr);
}
