#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charectors
 * @size: size of array
 * @c: character
 * Return: a pointer to an array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *AB;
	unsigned int i;

	if (size == 0)
		return (NULL);
	AB = malloc(size * sizeof(c));


	if (AB == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		AB[i] = c;

	return (AB);
}
