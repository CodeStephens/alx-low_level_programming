#include "main.h"

/**
 * free_grid - frees a 2 dimensional array memory allocation
 * @grid: double pointer to the 2 dimensional array
 * @height: the row size of the array
 *
 * Description:
 * Return: nothinf!
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
