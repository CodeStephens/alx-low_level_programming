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
	int j;

	while (*(str + len))
		len++;
	j = len / 2;
	if (len % 2 != 0)
		j += 1;
	while (j < len)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
