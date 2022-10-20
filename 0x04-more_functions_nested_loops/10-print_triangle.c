#include "main.h"

/**
 * print_triangle - use '#' to print triangle to the standard output
 * @size:input function parameter, which determines the number of '#' to be printed
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_triangle(int size)
{
	int count;
    	int counter = 0;
	int i = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (counter <= size)
		{
			if (i = size-1)
				_putchar(' ');
				for (count = 1; count <= size; count++)
					_putchar('#');
			counter++
				
		}
	}
}
