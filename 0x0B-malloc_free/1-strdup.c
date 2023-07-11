#include "main.h"
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 and s2 concatenation or NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *output = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (output == NULL)
	{
		return (NULL);
	}

	strcpy(output, s1);
	strcpy(output, s2);

	return (output);
}

