include "main.h"

/**
 * _strlen - evaluates the length of a given string
 * @n: character pointer to a string which the length is to be evaluated
 *
 * Description:
 * Return: integer
 */
int _strlen(char *n)
{
	int count = 0;

	if (*n != '\0')
	{
		count++;
		return (count + _strlen(n + 1));
	}
	return (count);
}
/**
 * *str_concat - concatenate two strings together
 * @s1: first string
 * @s2: second string
 *
 * Description:
 * Return: a pointer to the newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1;
	int len2;
	int i;
	int j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];
	ptr[i + len2] = '\0';
	return (ptr);
}
