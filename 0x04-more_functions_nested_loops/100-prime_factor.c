#include "main.h"

/**
 * print_number - prints out the value of inputted integer
 * @n: function parameter which is the integer
 *
 * Description: takes in an integer and output the same integer using _putchar
 * Return: 0 always
 */
void print_number(int n)
{
	unsigned int absValue;

	if (n < 0)
	{
		absValue = n * -1;
		_putchar('-');
		_putchar(absValue);
	}
	else
		_putchar(absValue); 
	}

}
