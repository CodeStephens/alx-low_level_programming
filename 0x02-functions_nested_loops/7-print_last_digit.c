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

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit = lastDigit * -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
