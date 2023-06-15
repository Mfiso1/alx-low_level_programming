#include "main.h"
/**
 * _isupper - Identifies the case of a charector
 *@c: the integer value checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
