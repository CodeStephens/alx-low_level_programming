#include "search_algos.h"

/**
 * binary_search - searches for the first match of a given value and returns
 * the index in a sorted array
 * @array: pointer to the head of the aray to be searched
 * @size: number of elements in the array
 * @value: given value to be matched in the array
 *
 * Description:
 * Return: integer if a match exist in the array, else -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int m, i, L, R;

	L = 0;
	R = size - 1;
	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; ++i)
		{
			if (i == R)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = (L + R) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			L = m + 1;
		else
			R = m - 1;
	}
	return (-1);
}
