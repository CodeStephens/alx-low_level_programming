#include "main.h"

/**
 * print_numbers - outputs the number 0-9 followed by a new line
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
		iCall++;
	}
	_putchar('\n');
}
