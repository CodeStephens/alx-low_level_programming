#include "main.h"

/**
 * is_prime_number - determines if a given integer is a prime number or not
 * @n: given integer as function parameter
 *
 * Description:
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 3)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (n / (n - 2) != 0)
	{
		is_prime_number(n - 2);
		return (1);
	}
	else
		return (0);
}
