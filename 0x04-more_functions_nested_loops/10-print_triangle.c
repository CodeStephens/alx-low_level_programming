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
	int space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (counter <= size)
		{
			for (space = counter - 1; space > 0;  space--)
			{
				_putchar(' ');
			}
				for (i = 1; i <= counter; i++)
				{
					_putchar('#');
				}
			counter++
				
		}
	}
}
