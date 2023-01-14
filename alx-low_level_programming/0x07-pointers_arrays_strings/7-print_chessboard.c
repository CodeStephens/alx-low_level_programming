#include "main.h"

/**
 * print_chessboard - prints the chessboard to the standard output
 * @a: a pointer array as function parameter
 *
 * Description:
 * Return: nothing!
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
