#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Decription: Output alphabets a-z
 * Return: 0 (sucess)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	if (alphabets != 'e' && alphabets != 'q')
	{
		putchar(alphabets);
	}
	else
	{
	}
	putchar('\n');
	return (0);
}

