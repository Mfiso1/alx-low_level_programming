#include "main.h"
/**
 * print_sign - prints the sign associated with an int value
 *@n: prints the sign of a number
 * Return: 1 if n is greater than 0,
 * 0 if n is equal 0,
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		if else(n = 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}

