#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @s: string
 * Return: uppercase string
 */
char *cap_string(char *s)
{
	int i, j;

	char *sc = ",;.!?(){}\n\t\" ";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0 && *(s + i) >= 'a' && *(s + i) <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sc[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
