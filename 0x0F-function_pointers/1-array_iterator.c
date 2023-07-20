#include "function_pointers.h"
#include <stdlib.h>

/**
 *  array_iterator - executes a function given as a parameter
 *  @array: array to iterate over
 *  @size: size of the array
 *  @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (!array || !action)
		return;

	for (c = 0; c < size; c++)
		action(array[c]);
}
