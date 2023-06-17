#include <unistd.h>
#include <stdlib.h>
/**
 * malloc_checked - Function to allocate memory
 * @b: char to be printed
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);


	if (p == NULL)
		exit(98);

	return (p);
}
