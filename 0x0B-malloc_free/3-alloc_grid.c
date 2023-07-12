#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to 2d intger array
 * @width: The width of array
 * @height: The height of array
 * Return: If fails NULL else pointer to 2d interger array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(sizeof(int) * width);

		if (arr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(arr[h]);

			free(arr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	}

	return (arr);
}

