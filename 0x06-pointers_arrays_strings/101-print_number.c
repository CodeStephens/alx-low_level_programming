#include "main.h"

/**
 * print_number - prints an integer to the console
 * @n: integer function parameter
 *
 * Description:
 * Return: nothing!
 */
void print_number(int n)
{
	int rem = 0;
	
	if (n < 0)
	{	
		n *= -1;
		_putchar('-');
	}
	if (n/10)
		print_number(n/10);
	putchar((n % 10) + '0');
}
