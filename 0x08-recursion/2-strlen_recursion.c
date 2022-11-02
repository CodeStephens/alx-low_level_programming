#include "main.h"

/**
 * int _strlen_recursion - returns the length of a string
 * @s: given string as a functional parameter
 *
 * Description: prints the length of a string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
