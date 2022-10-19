#include "main.h"

/**
 * times_table - multiplication tables from 0 to 9
 *
 * Description: prints the output of multiplication table from 0 to 9
 * Return: 0 for successful code execution
 */
void times_table(void)
{
	int i, j, multResult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multResult = i * j;
			if (multResult < 10)
			{
				_putchar(multResult + '0');
				if (j < 9)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				else
					_putchar('\n');
			}
			else
			{
				_putchar((multResult / 10) + '0');
				_putchar((multResult % 10) + '0');
				if (j < 9)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				else
					_putchar('\n');
			}
		}
	}
}
