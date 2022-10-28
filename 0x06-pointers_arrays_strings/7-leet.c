#include "main.h"

/**
 * *leet - encodes string into 1337
 * @c: string pointer given as function parameter
 *
 * Description: changes certain letters with numbers in a given string
 * Return: letters of the alphabet
 */
char *leet(char *c)
{
	char *str = c;
	int i;
	char b[] = {'a'. 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	while (*c != '\0')
	{
		for (i = 0; i < 5; i++}
		(
		 	if (*c == b[i] || *c == b[i] - 32)
				*c = n[i];
		)
		c++;
	}
	return (str);
}
