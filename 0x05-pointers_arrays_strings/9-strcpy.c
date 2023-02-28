#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}

	*(dest + j) = '\0';
	return (dest);
}
