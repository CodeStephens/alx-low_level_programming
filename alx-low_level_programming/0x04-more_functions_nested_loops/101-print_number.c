#include "main.h"

/**
  * print_number - prints an integer to the standard output
  * @n: the integer to prints, which is the function parameter
  *
  * Description: _putchar() is used as the print function
  * Return: 0 because of the "void" nature of the function datatype
  */
void print_number(int n)
{
	unsigned int cValue;

	cValue = n;

	if (n < 0)
	{
		n = n * -1;
		cValue = n;
		_putchar('-');
	}
	cValue /= 10;

	if (cValue != 0)
		print_number(cValue);
	_putchar((unsigned int) n % 10 + '0');
}
