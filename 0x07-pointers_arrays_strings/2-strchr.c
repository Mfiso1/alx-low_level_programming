include "main.h"
#include <stdio.h>

/**
 *  _strchr - locate a character in a string
 *  @s: string to check
 *  @c: character to locate
 *  Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character c is not found
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
