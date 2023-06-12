#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of commands
 * @argv: array containing commands
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
