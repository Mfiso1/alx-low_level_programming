#include "main.h"
/**
 * _strlen_recursion - This function returns the lenght of string
 * @s: inputs
 * Return: The length of string
 */
int _strlen_recursion(char *s);
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
			return (0);
}
