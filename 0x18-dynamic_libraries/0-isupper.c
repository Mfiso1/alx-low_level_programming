#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character checked
 * Return: 1 if uppercase or else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
