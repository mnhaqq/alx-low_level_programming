#include <stdlib.h>

/**
 *alloc_grid - allocate memory for 2 dimensional array of ints
 *@width: width of array
 *@height: height of array
 *Return: pointer to 2d array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *ar;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar = malloc(width * sizeof(int));
		if (ar == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ar[j] = 0;
		grid[i] = ar;
	}
	return (grid);
}
