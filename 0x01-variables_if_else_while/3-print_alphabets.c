#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Decription: Output alphabets a-z in both lower and uppercase
 * Return: 0 (sucess)
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

