#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int w, x, y, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x] != '\0'; x++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	y = 0;

	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x] != '\0'; x++)
		{
			str[y] = av[w][x];
			y++;
		}
		str[y] = '\n';
		y++;
	}
	return (str);
}
