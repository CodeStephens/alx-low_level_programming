#include "main.h"

/**
  * times_table - multiplication table from 0 - 9 is printed to the console
  *
  * Description: a simple multilplication table
  * Return: nothing is outputted because of its void function type
  */
void times_table(void)
{
	int i, j;
	int result, unitDigit, tensDigit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result > 9)
			{
				unitDigit = result % 10;
				tensDigit = (result - unitDigit) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(tensDigit + '0');
				_putchar(unitDigit + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(result + '0');
			}
		}

		_putchar('\n');
	}
}
