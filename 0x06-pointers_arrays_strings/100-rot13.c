#include "main.h"

/**
 * *rot13 - encodes given string with rot13 encryption
 * @c: given string to encrypt
 *
 * Description:
 * Return: characters
 */
char *rot13(char *c)
{
	char *initial = c;
	int i;
	char prim[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'
		, 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W'
		, 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
		, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u'
		, 'v', 'w', 'x', 'y', 'z'};
	char conv[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'
		, 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
		, 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'
		, 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'
		, 'i', 'j', 'k', 'l', 'm'};

	while (*c != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*c == prim[i])
			{
				*c = conv[i];
				break;
			}
		}
		c++;
	}
	return (initial);
}
