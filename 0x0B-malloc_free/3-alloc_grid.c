#include "main.h"

/**
 * **alloc_grid - declaring and intializing a 2 dimensional array
 * @width: the size of the row of the 2 dimensional array
 * @height: the size of the column of the array
 *
 * Description:
 * Return: pointer address
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **mat_array = (int **) malloc(height * sizeof(int*));
	for (i = 0; i < width; i++)
		mat[i] = (int *) malloc(width * sizeof(int));

	if (mat_array == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			mat_array[i][j] = 0;
	}
	return (mat_array);

}
