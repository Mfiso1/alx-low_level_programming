#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: The width of array
 * @height: The height of array
 * Return: A pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arry;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	arry = malloc(sizeof(int *) * height);

	if (arry == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		arry[h] = malloc(sizeof(int) * width);

		if (arry[h] == NULL)
		{
			for (; h >= 0; h--)
				free(arry[h]);

			free(arry);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arry[h][w] = 0;
	}

	return (arry);
}

