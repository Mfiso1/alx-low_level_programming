#include "hash_tables.h"

/**
 * key_index - index a key pair to be stored in hTable
 * @key: key
 * @size: size of array
 * Return: index key
 * Description: use djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	/* check size */
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
