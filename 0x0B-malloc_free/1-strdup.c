#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to space memory allocted
 *  that has a parameter.
 *  @str: string to be duplicated
 *  Return: a pointer to string duplicated or NULL
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int w;
	int v;

	if (str == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		v++;

	newstr = (char *)malloc(w + 1 * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		newstr[w] = str[w];

	newstr[v] = '\0';

	return (newstr);
}

