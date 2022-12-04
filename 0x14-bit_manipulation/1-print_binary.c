#include "main.h"

/**
 * print_binary - prints the binary equivalent of an integer
 * @n: given integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char result;
	
	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n == 1)
	{
		_putchar (1 + '0');
		return;
	}
	print_binary(n >> 1);
	result = (n & 1);
	if (result)
		_putchar ('1');
	else
		_putchar ('0');
}
