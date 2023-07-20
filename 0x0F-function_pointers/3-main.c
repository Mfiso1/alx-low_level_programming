#include "3-calc.h"

/**
 * main - program for simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char ppt;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	ppt = *argv[2];

	if ((ppt == '/' || ppt == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fun(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
