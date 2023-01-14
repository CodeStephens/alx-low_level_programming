#include "main.h"

/**
 * _strspn - returns the number of bytes in s which consists of bytes from
 * accept
 * @s: character to be scanned
 * @accept: character to be matched
 *
 * Description:
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		if (*s != ' ')
		{
			while (*accept != '\0')
			{
				if (*accept == *s)
					count++;
				accept++;
			}
		}
		else
			return (count++);
		s++;
	}
	return (count);
}
