#include "main.h"
/**
 * get_bit - Retrieves the value of a specific bit at a given index.
 * @n: The unsigned long int containing the bit sequence.
 * @index: The index of the bit to be retrieved.
 *
 * Return: The value of the bit (0 or 1) at the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int abc;

	if (n == 0 && index < 64)
		return (0);

	for (abc = 0; abc <= 63; n >>= 1, abc++)
	{
		if (index == abc)
		{
			return (n & 1);
		}
	}

	return (-1);
}
