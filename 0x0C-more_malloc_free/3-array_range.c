#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates a function of intergers
 * @min: Start value of the array
 * @max: End value of the array
 * Return: A pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
