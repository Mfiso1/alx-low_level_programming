#include "main.h"
/**
 * factorial - Function the reutrns a factorial number
 * @n: inputs
 * Return: A factorial number given is != 0 and if so return -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
