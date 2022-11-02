#include "main.h"

/**
 * _pow_recursion - evaluates the value of a number raised to another number
 * @x: base number
 * @y: index number
 *
 * Description:
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(int x, int (y - 1))));
}
