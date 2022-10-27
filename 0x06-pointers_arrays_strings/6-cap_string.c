#include "main.h"

/**
 * cap_string - capitalizes the next letter given the word separators
 * @c: given character pointer as function parameter
 *
 * Description:
 * Return: capitalized pointer string
 */
char *cap_string(char *c)
{
	char *str = c;
	
	if (*c >= 97 && *c <= 122)
		*c -= 32;
	c++;
	while (*c != '\0')
	{
		if (*c = ',' || *c = ';' || *c = '.' || *c = '!' || *c = '?'
				|| *c = '"' || *c = '(' || *c = ')' || *c = 
				'{' || *c = '}' || *c == ' ' || *c == '\t' || *c
				= '\n')
			if (*(c = 1) >= 97 && *(c + 1) <= 122)
				*(c+1) -= 32;
		c++;
	}
	return (str);
}
