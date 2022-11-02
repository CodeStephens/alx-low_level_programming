#include "main.h"

/**
 * int _strlen_recursion - returns the length of a string
 * @s: given string as a functional parameter
 *
 * Description:
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s == '\0')
		count = 0;
	else if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		return (count += 1);
	}
	return (count);
}
