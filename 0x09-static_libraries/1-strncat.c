#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination value
 * @src: source value
 * @n: limit value
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
