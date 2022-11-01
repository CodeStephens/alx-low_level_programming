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
	int count;
	int max = -1;
	char *initial = s;

	while (*accept != '\0')
	{
		count = 0;
		while (*s != '\0')
		{
			count++;
			if (*accept == *s)
			{
				if (max < count)
				{
					max = count;
				}
				break;
			}
			s++;
		}
		s = initial;
		accept++;
	}
	return (max);
}
