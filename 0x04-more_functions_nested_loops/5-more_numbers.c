#include "main.h"

/**
 * more_numbers - outputs the number 0-14, ten times
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void more_numbers(void)
{
	int count;
	int counter;

	for (count = 0; count <= 10; count++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			if (counter <= 9)
			{
				_putchar(counter + '0');
			}
			else
			{
				_putchar((counter / 10) + '0');
				_putchar((counter % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

