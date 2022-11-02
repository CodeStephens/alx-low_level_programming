#include "main.h"

/**
 * _puts_recursion - prints a string followed by newline to the console
 * using recursion
 * @s: string to be printed
 *
 * Description:
 * Return: nothing!
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
