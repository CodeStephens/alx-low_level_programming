#include "main.h"

/**
 * *leet - encodes string into 1337
 * @*c: string pointer given as function parameter
 *
 * Description:
 * Return: letters of the alphabet
 */
char *leet(char *c)
{
	char *str = c;

	while (*c != '\0')
	{
		if (*c == 'a' || *c == 'A')
			*c = '4';
		else if (*c == 'e' || *c == 'E')
			*c = '3';
		else if (*c == 'o' || *c == 'O')
			*c = '0';
		else if (*c == 't' || *c == 'T')
			*c = '7';
		else if (*c == 'l' || *c == 'L')
			*c = '1';
		c++;
	}
	return (str);
}
