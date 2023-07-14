#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to a given number of bytes
 * @str1: The first string.
 * @str2: The second string.
 * @n: Number of bytes to concatenate from str2 to str1.
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *concatenated;
	unsigned int len = n, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i]; i++)
		len++;

	concatenated = malloc(sizeof(char) * (len + 1));

	if (concatenated == NULL)
		return (NULL);

	len = 0;

	for (i = 0; str1[i]; i++)
		concatenated[len++] = str1[i];

	for (i = 0; str2[i] && i < n; i++)
		concatenated[len++] = str2[i];

	concatenated[len] = '\0';

	return (concatenated);
}
