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

	for (count = 0; count <= 10; count++)
	{
		while (count <= 14)
		{
			_putchar(count + '0');
		}
		_putchar('\n');
	}
}
