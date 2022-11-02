#include "main.h"

/**
 * factorial - evaluates the factorial of a given number
 * @n: given number as an integer type functional parameter
 *
 * Description:
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
