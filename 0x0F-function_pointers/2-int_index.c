#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array to search
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size > 0 && array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			r = cmp(array[a]);
			if (b)
				break;
		}
		if (a < size)
			return (a);
	}
	return (-1);
}
