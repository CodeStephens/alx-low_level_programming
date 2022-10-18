#include "main.h"

/**
 * print_sign - checks for the magnitude of number with respect to sign (+ & -)
 * @n: the declared parameter
 *
 * Description: function checks for positivity or negativity of n
 * Return:1, 0 & -1 are returned for positive, zero or negative number in order
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('1');
		_putchar(',');
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar('0');
	} 
	else
	{
		_putchar('-1');
		_putchar(',');
		_putchar('-');
	}
}
