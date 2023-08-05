#include "main.h"

/**
 * set_bit - caps value of a bit to 1
 * @n: pointer of unsigned long int
 * @index: bit index
 *
 * Return: 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int abc;

	if (index > 63)
		return (-1);

	abc = 1 << index;
	*n = (*n | abc);

	return (1);
}
