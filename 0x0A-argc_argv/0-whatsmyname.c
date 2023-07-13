#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: size of array command line arg.
 * @argv: command line argument
 * Return: Always 0, success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
