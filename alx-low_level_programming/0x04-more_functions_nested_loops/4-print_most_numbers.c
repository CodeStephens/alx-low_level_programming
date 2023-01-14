#include "main.h"

/**
 * print_most_numbers - outputs the number 0-9, excluding 2 & 4 followed
 * by a new line
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count != 2 && count != 4)
			_putchar(count + '0');
	}
	_putchar('\n');
}
