#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a certain index
 * @index: given index where the bit value is sought for
 * @n: pointer to given integer value
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (n == NULL)
                return (-1);
        *n = *n >> index;
        *n = *n | 1;
        *n = *n << index;
        return (1);
}
