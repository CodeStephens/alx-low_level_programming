#include "main.h"

/**
 * *_memset - to set n bytes of the memory area pointed to by s by constant
 * byte b
 * @s: function parameter whose character is to replaced by b
 * @b: given constant byte function parameter
 * @n: the maximum number of character to replaced in s
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
