#include "function_pointers.h"

/**
 * int_index - searches for the index of an integer
 * @array: pointer to the given array
 * @size: number of elements of the array
 * @cmp: pointer to the function for comparison
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	return (-1);
}
