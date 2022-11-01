#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory are pointed to by s
 * @b: given constant byte to be filled
 * @s: given character whose memory is to be filled
 * @n: given number of bytes to be filled
 *
 * Description:
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *initial = s;
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return (initial);
}
