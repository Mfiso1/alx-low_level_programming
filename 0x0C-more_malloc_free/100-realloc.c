#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered from min to max
 * @min: First value of array
 * @max: Last value of array
 *
 * Return: If min > max or function fails - NULL
 *         else - a pointer to the newly created array
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

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size for old memory block
 * @new_size: Size for new memory block
 *
 * Return: If new_size == old_size - ptr
 *         If new_size == 0 and ptr is not NULL - NULL
 *         else - a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptrcpy, *newer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptrcpy = ptr;
	mem = malloc(sizeof(*ptrcpy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	newer = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		newer[i] = *ptrcpy++;

	free(ptr);
	return (mem);
}
