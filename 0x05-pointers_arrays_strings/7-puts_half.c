#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: given string type parameter
 *
 * Description: _putchar() is solely use for printing to console, couple
 * with some loop iterations
 * Return: nothing!
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	len /= 2;
	for (i = len; i != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
