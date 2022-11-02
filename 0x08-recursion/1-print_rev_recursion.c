#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to be printed
 *
 * Description:
 * Return: nothing!
 */
void _prints_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
