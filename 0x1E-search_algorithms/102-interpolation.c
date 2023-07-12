#include "search_algos.h"

/**
 * interpolation_search - searches for the first match of a given value and
 * returns the index in a sorted array
 * @array: pointer to the head of the aray to be searched
 * @size: number of elements in the array
 * @value: given value to be matched in the array
 *
 * Description: uses a defined interpolation technique to locate the value
 * being searched for in a similar manner to binary search algorith
 * Return: integer if a match exist in the array, else -1
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t L, H, key;

	L = 0;
	H = size - 1;

	/* checking for validity of the given array */
	if (array == NULL)
		return (-1);

	/* implementing the interpolation technique */
	while (L <= H && array[L] <= value && array[H] >= value)
	{
		key = L + ((value - array[L]) * (H - L)) / (array[H] - array[L]);

		printf("Value checked array[%lu] = [%d]\n", key, array[key]);
		if (array[key] == value)
			return (key);
		if (array[key] < value)
			L = key + 1;
		else
			H = key - 1;
	}

	/* value not found */
	printf("Value checked array[%lu] is out of range\n", key);
	return (-1);
}
