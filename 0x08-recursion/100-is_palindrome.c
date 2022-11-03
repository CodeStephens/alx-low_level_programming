#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * countString - an intermediary function to determine the string length
 * @s: string pointer to a string
 *
 * Description:
 * Return: integer
 */

int countString(char *s)
{
        int *p, res;
       	p = &res;

        if (*s != '\0')
                res = countString(s + 1) + 1;
        else
                return (0);
        return (res);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else if (*s == *(s + *p))
	{
		is_palindrome(s + 1);
		is_palindrome(s + *p - 1);
	}
	else
		return (0);
}
