#include "main.h"

/**
 * clear_bit - caps value of a bit to 0
 * @n: pointer to unsigned long int.
 * @index: bit index
 *
 * Return: 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int abc;

	if (index > 63)
		return (-1);

	abc = 1 << index;

	if (*n & abc)
		*n ^= abc;

	return (1);
}
