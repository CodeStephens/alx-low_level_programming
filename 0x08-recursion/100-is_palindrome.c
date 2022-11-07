#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string pointer to a string
 *
 * Description:
 * Return: integer
 */
int is_palindrome(char *s)
{
	char *initial = s;

	while (*s)
	{
		count++;
		s++;
	}
	s = initial;
	if (*s = '\0')
		return (1);
	else
	{
		if (*s == *(s+(count - 1)))
		{
			s++;
			is_palindrome(*(s+1));
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
