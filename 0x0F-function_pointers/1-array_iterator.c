#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array_iterator
 * @array: the array on whose elements manipulation is performed
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
