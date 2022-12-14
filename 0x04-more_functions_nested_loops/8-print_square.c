#include "main.h"

/**
 * print_square - print '#' to the standard output
 * @size:input function parameter, which determines the number of '#' to
 * be printed
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_square(int size)
{
	int count;
	int counter;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < size; counter++)
		{
			for (count = 1; count <= size; count++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
