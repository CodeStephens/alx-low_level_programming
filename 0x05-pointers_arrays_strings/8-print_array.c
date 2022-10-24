#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a given number of array elements in a formatted pattern
 * @a: given pointer variable
 * @n: given functional parameter, which is the number of array elements
 *
 * Description: _putchar() and loop iteration are used for this purpose
 * Return: nothing because of the data type of the function
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < (n - 1); count++)
	{
		printf("%d ,", *(a + n));
	}
	printf("%d\n", *(a + (n -1));
}
