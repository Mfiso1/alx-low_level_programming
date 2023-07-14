#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered from min to max
 * @min: First value of array
 * @max: Last value of array
 *
 * Return: If min > max or function fails - NULL
 *         else - a pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	array = malloc(sizeof(int) * range);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
