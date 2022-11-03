#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * countString - an intermediary function to determine the string length
 * @s: string pointer to a string
 *
 * Description:
 * Return: integer
 */
int i = 0;

int countString(char *s)
{
        if (*s != '\0')
		i = countString(s + 1) + 1;
        else
                return (0);
        return (i);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else if (*s == *(s + i))
	{
		is_palindrome(s + 1);
		is_palindrome(s + i - 1);
	}
	else
		return (0);
}
