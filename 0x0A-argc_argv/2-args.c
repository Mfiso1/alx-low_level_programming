#include <stdio.h>
/**
 * main - prints arguments
 * @argc: number of commands
 * @argv: array containing the program commands
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
