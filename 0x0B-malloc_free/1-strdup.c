#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly space allocated in memory
 *  with a copy of string
 *  @str: string to be duplicated
 *  Return: pointer to dup string or NULL
 */
char *_strdup(char *str)
{
	char *ns;
	unsigned int x;
	int y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		y++;

	ns = (char *)malloc(x + 1 * sizeof(char));

	if (ns == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		ns[x] = str[x];

	ns[y] = '\0';

	return (ns);
}
