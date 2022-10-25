#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first
 * @str: given string function parameter
 *
 * Description: _putchar is solely use for printing to the console
 * Result: nothing!
 */
void puts2(char *str)
{
	int len = 0;
	
	while (*str != '\0')
	{
		len++;
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
