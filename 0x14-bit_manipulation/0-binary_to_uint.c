#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an equivalent unsigned integer.
 * @b: The input binary string to convert.
 *
 * Return: The unsigned integer value representing the binary string,
 *         or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int len, multiplier;

	if (!b)
		return (0);

	res = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, multiplier = 1; len >= 0; len--, multiplier *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			res += multiplier;
		}
	}
			return (res);
}
