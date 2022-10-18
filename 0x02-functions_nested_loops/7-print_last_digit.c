#include "main.h"

/**
 * print_last_digit - prints to the console the last digit of a given number
 * @n: function parameter to be checked
 *
 * Description: uses arithmetric manipulation to prints last digit to the
 * console
 * Return: any value between 0 - 9 for successful code execution
 */
int print_last_digit(int n)
{
	int lastDigit;
       
	if (n >= 0)
		lastDigit = n % 10;
	else
		lastDigit = (n * -1) % 10;
	return (lastDigit);
}
