#include "main.h"

/**
 * get_bit - gets the bit of a given integer at a certain index
 * @index: given index where the bit value is sought for
 * @n: given integer value
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count_bit = 0;
	
	while (n >= 0)
	{
		if (count_bit == index)
			return (n & 1);
		count_bit++;
		n = n >> 1;
	}
	return (-1);
}
