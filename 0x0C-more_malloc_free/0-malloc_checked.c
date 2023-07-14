#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocator
 * @b: integer to assign memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
