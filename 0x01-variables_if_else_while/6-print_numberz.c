#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Decription: print 0123456789
 * Return: 0 (sucess)
 */

int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
	{
		putchar(base + '0');
	}
	putchar('\n');
	return (0);
}

