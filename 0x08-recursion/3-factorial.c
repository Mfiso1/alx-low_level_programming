#include "main.h"
/**
 * factorial(int n) - Function the reutrns a factorial number
 * @n: inputs
 * Return: a -1  or 1 given the results
 */
int factorial(int n);
{
	if (n == 0 || n > 0)
	{
		return (1);
		return (n * factorial(n - 1));
	}
	return (-1);
}
