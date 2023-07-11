#include "main.h"

/**
 * create_array - creates an array of char intialized with a specific char
 * @size: size of array
 * @c: specific char array
 * Return: a pointer to array else Null
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}

	return (ptr);
}
