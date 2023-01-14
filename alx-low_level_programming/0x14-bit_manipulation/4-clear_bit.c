#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a certain index
 * @index: given index where the bit value is sought for
 * @n: pointer to given integer value
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
