#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Decription: print 0123456789abcdef
 * Return: 0 (sucess)
 */

int main(void)
{
	char alphabets;
	char base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

