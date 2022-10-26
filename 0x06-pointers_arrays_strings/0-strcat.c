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
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		_putchar(*(dest + i);
		i++;
	}
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		_putchar(*(dest + i));
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (0);
}
