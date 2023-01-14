#include "main.h"

/**
 * print_triangle - use '#' to print triangle to the standard output
 * @size:input function parameter, which determines the number of '#' to
 * be printed
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_triangle(int size)
{
	int count;
	int counter;
	int space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < size; counter++)
		{
			for (space = size - counter; space > 1;  space--)
			{
				_putchar(' ');
			}
				for (count = 0; count <= counter; count++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
}
