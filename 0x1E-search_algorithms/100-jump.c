#include "search_algos.h"

/**
 * jump_search - searches for the first match of a given value and returns
 * the index in a sorted array
 * @array: pointer to the head of the aray to be searched
 * @size: number of elements in the array
 * @value: given value to be matched in the array
 *
 * Description: skips/jumps a block of array based on the square root of the
 * size of the array, evaluates computational comparison, before linear search
 * Return: integer if a match exist in the array, else -1
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t iter_step, prev, next, i;

	/* test for validity of the array */
	if (array == NULL)
		return (-1);

	/* continue with the jump search algorithm */
	iter_step = sqrt(size);
	prev = 0;
	next = iter_step;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	/* Find the block where the target may reside */
	while (next < size && array[next] < value)
	{
		prev = next;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		next += iter_step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
	/* Perform linear search within the block */
	for (i = prev; i < next && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	/* Element not found */
	return (-1);
}
