#include "main.h"

/**
 * _strncat - function that concaenates two strings
 * @dest: string to copy to
 * @src: string to copy from
 * @n: no of bytes to copy
 * Return: to destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
