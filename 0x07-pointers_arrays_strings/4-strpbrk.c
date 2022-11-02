#include "main.h"

/**
 * _strpbrk - returns the first occurence of any bytes in "accept" character
 * @s: given functional parameter of the character datatype to be scanned
 * @accept: string containing characters to be matched
 *
 * Description:
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	char *initial = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			accept++;
		}
		if (*s == *accept)
			return (s);
		else
		{
			accept = initial;
			s++;
		}
	}
	return ('\0');
}
