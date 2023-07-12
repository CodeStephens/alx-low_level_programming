#include "search_algos.h"

/**
 * linear_search - searches for the first match of a given value and returns
 * the index in the array
 * @array: pointer to the head of the aray to be searched
 * @size: number of elements in the array
 * @value: given value to be matched in the array
 *
 * Description:
 * Return: integer if a match exist in the array, else -1
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i,  array[i]);
		if (array[i] != value)
			continue;
		else
		{
			printf("Found %d at index: %d\n", array[i], i);
			return (i);
		}
	}
	printf("Found %d at index: -1\n", value);
	return (-1);
}
