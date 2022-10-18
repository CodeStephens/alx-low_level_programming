#include "main.h"

/**
 * _abs - computes the absolute of any given number
 * @r: integer declared parameter to be checked
 *
 * Description: the absolute value of the argument is printed to the console
 * Return: 0 or any integer value greater than 0 for successful code execution
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
