#include "main.h"

/**
 * print_numbers - outputs the number 0-9 followed by a new line
 *
 * Description: _putchar function is used for this purpose
 * Return: nothing because of the "void" nature of the function datatype
 */
void print_numbers(void)
{
	int iCall = 48;

	while (iCall < 58)
	{
		_putchar(iCall);
		iCall++;
	}
	_putchar('\n');
}
