#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string else NULL
 */
char *argstostr(int ac, char **av)
{
	int w, x, k, length;
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

	k = 0;

	for (w = 0; w < ac; w++)
	{
		for (j = 0; av[w][x] != '\0'; x++)
		{
			str[k] = av[w][x];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
