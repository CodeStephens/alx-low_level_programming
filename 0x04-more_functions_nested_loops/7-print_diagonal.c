#include "main.h"

/**
 * print_diagonal - print '\' to the standard output, followed by a new line
 * @n:input function parameter, which determines the number of '\' to be printed
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_diagonal(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count <= n; count++)
			_putchar('\\');
		_putchar('\n');
	}
}
