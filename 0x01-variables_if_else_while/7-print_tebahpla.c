#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Decription: Output alphabets z-a
 * Return: 0 (sucess)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

