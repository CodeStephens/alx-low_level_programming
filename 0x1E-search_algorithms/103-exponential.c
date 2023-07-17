#include "search_algos.h"

/**
 * b_search - searches for the index of the first match of a value
 * @array: pointer to the head of the aray to be searched
 * @value: given value to be matched in the array
 * @L: starting index search for binary_search algorith
 * @R: ending index search for binary_search algorithm
 *
 * Description:
 * Return: integer if a match exist in the array, else -1
 *
 */

int b_search(int *array,size_t L, size_t R, int value)
{
	size_t mid, i;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = L + (R - L) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return (-1);
}

/**
   * exponential_search - searches for the first match of a given value an
   * returns the index in a sorted array
   * @array: pointer to the head of the aray to be searched
   * @size: number of elements in the array
   * @value: given value to be matched in the array
   *
   * Description: uses a defined exponential technique to locate the possi
   * bound of the value, and combines with binary search algorithm to dete
   * the index location of the value
   * Return: integer if a match exist in the array, else -1
   *
   */

int exponential_search(int *array, size_t size, int value)
{
	size_t key, L, R;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	/* locating the range for binary search */
	key = 1;
	while (key < size && array[key] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", key, array[key]);
		key *= 2;
	}

	L = key / 2;
	R = (key < size) ? key : (size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", L, R);

	return (b_search(array, L, R, value));
}
