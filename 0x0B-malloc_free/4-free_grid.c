#include <stdlib.h>

/**
 *free_grid - function to free malloced memory
 *@grid: grid to be freed
 *@height: height of grid
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
