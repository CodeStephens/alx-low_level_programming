#include "3-calc.h"

/**
 * op_add - addition of given arguments
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference/subtraction of given arguments
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product/multiplication of given arguments
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of given arguments
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - returns the remainder of the division between the given arguments
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
