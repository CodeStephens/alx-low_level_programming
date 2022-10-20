#include "main.h"

/**
 * print_line - print '-' to the standard output, followed by a new line
 * @n:input function parameter, which determines the number of '_' to be printed
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
			_putchar('_');
		_putchar('\n');
	}
}
