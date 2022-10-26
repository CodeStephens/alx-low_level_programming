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

	while (*(dest + i) == '\0')
	{
		while (*(src + j))
		{
			_putchar(*(src + j));
			j++;
		}
		i++;
	}
	_putchar('\0');
	return (0);
}
