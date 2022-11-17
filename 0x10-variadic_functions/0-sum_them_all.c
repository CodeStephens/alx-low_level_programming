#include "variadic_functions.h"

/**
 * sum_them_all - sum up all the parameters given to the function
 * @n: number of variable arguments
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);
	va_start(args, n)
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
