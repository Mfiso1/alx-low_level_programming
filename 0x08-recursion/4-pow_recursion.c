#include "main.h"
/**
 * _pow_recursion - This function returns the value of the power
 * @x: the base value
 * @y: the exponent value
 * Return: the value of the power
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (0);
}

