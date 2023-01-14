#include "main.h"

/**
 * *string_toupper - converts lowercase letters of a string to uppercase
 * @c: given character pointer as function parameter
 *
 * Description:
 * Return: any character of the alphabet
 */
char *string_toupper(char *c)
{
	char *str = c;

	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
		c++;
	}
	return (str);
}
