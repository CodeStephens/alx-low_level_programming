#include "main.h"

/**
 * *_strchr - returns the first occurence of a given character
 * @c: given functional parameter character
 * @s: given character in which to check the occurrence of c;
 *
 * Description:
 * Return: pointer to the first character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	if (*s == '\0')
		return (NULL);
	return (s);
}
