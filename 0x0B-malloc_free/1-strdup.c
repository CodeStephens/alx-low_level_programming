#include "main.h"

/**
 * _strlen - returns the length of string
 * @n: string in which the lenght is sought for
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
 * *_strdup - copies a string to a new memory space
 * @str: string to be copied
 *
 * Description:
 * Return: pointer to the memory address of the copied string
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;
	int i;

	len = _strlen(str);
	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
