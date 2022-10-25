#include "main.h"

/**
 * print_rev - prints a given string in reverse to the console
 * @s: given functional parameter (type string)
 *
 * Description: a loop and _putchar is utilized to achieve this aim
 * Return: nothing!
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
