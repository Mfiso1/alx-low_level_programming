#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: Number of elements
 * @size: Byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *         else - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (memory);
}
