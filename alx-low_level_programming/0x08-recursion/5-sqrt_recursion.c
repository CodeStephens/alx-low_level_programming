#include "main.h"

/**
 * sqrt_check - evaluates the square root of a given number
 * @num: integer functional parameter in which square root is sort for
 * @n: check to see if c is square root of the number
 *
 * Return: The square root value
 */
int sqrt_check(int num, int n)
{
	if (n * n == num)
	{
		return (n);
	}
	else if (n >= num / 2)
		return (-1);
	return (sqrt_check(num, n + 1));
}

/**
 * _sqrt_recursion - evaluates the square root of given number
 * @num: given number in which square root is sort for
 *
 * Return: The square root or -1 if there is no natural square root
 */
int _sqrt_recursion(int num)
{
	if (num == 1)
		return (1);
	else if (num < 0)
		return (-1);
	else if (num == 0)
		return (0);
	return (sqrt_check(num, 1));
}
