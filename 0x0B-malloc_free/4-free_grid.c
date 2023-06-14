#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function.
 * @grid: array to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
		free(grid[w]);

	free(grid);
}
