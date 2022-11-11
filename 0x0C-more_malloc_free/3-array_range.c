#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum integer of the array
 * @max: maximum integer of the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, k;
	int *ptr;

	if (min > max)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	k = 0;
	for (i = min; i <= max; i++)
	{
		ptr[k] = i;
		k++;
	}
	return (ptr);
}
