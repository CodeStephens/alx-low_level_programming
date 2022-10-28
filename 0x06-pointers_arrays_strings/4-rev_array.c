#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer array referencing the declared array in the main function
 * @n: number of elements in the array
 *
 * Description:
 * Return: 0 due to he "void" data type of the function prototype
 */
void reverse_array(int *a, int n)
{
	int *initial = a;
	int *final = a + n - 1;
	int placeHolder;

	while (initial < final)
	{
		placeHolder = *initial;
		*initial = *final;
		*final = placeHolder;
		final--;
		initial++;
	}
}
