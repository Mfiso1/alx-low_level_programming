#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * need to flip
 * @n: 1st int value
 * @m: 2nd int value
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbt;

	for (nbt = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbt++;
	}

	return (nbt);
}
