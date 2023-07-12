#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid previously created by
 * the alloc_grid function.
 * @grid: the 2d array of integers to be freed
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);

	free(grid);
}
