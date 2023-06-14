#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: A pointer or Null to space memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int w;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] || s2[w]; w++)
		y++;

	concat_str = malloc(sizeof(char) * y);

	if (concat_str == NULL)
		return (NULL);

	for (w = 0; s1[w]; w++)
		concat_str[x++] = s1[w];

	for (w = 0; s2[w]; w++)
		concat_str[x++] = s2[w];

	return (concat_str);
}

