#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words
 * @str: string to check
 * Return: number of words
 */
int count_word(char *str)
{
	int w;
	int x;
	int y;

	w = 0;
	y = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ')
			w = 0;
		else if (w == 0)
		{
			w = 1;
			y++;
		}
	}
	return (y);
}
/**
 * **strtow - splits string into 2
 * @str: string to split
 * Return: pointer to an array or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, v = 0, len = 0, words, y = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (y)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (y + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - y;
				v++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = a;
	}

	matrix[v] = NULL;

	return (matrix);
}

