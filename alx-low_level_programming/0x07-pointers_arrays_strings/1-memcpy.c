#include "main.h"

/**
 * *_memcpy - to copy n bytes of memory area from src to dest
 *
 * @src: function parameter whose character whose n bytes is to be copied
 * @dest: function parameter character to be copued to
 * @n: the maximum number of bytes to be copied
 *
 * Description:
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *initial = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}
	return (initial);
}
