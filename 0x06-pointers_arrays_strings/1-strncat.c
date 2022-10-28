#include "main.h"

/**
 * *_strcat - concatenate a string with another string with n bytes restriction
 * @src: string to concatenate
 * @dest: string to concatenate/append to
 * @n: masximum number of bytes to be concatenated from src
 *
 * Description: concatenation using loops
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *initial;
	int count = 0;

	initial = dest;
	while (*dest != '\0')
		dest++;
	while (*dest != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (initial);
}
