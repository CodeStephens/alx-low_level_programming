#include "main.h"

/**
 * expo - evaluates the a to the power of b
 * @a: base integer
 * @b: index integer
 *
 * Return: integer
 */
int expo(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * expo(a, (b - 1)));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int in decimal
 * @b: pointer to a string of 1s and/or 0s
 *
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, sum;
	const char *temp;

	temp = b;
	len = sum = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			len++;
			b++;
		}
		else
			return (0);
	}
	len = len - 1;
	for (i = 0; i <= len; i++)
	{
		if (temp[i] == '1')
			sum += expo(2, (len - i));
	}
	return (sum);
}
