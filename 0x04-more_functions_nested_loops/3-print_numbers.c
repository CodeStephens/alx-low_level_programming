#include "main.h"

/**
 * print_numbers - outputs the number 0-9 followed by a new line
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_numbers(void)
{
	int count;

	while (count < 10)
	{
		_putchar(count + '0');
	}
	_putchar('\n');
}
