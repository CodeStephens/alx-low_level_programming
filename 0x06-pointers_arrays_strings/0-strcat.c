#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenate a string with another
 * @src: string to concatenate
 * @dest: string to concatenate/append to
 *
 * Description:
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *initial;

	initial = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (initial);
}
