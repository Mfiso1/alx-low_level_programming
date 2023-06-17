#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - Evalutes the string as is not a number
 * @s: String to evaluate
 * Return: 0 if string is nota digit, otherwise 1
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lenA, lenB, lenC, k, trans, digit1, digit2, *result, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lenA = _strlen(s1);
	lenB = _strlen(s2);
	lenC = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (k = 0; k <= lenA + lenB; k++)
		result[k] = 0;
	for (lenA = lenA - 1; lenA >= 0; lenA--)
	{
		digit1 = s1[len1] - '0';
		trans = 0;
		for (lenA = _strlen(s2) - 1; lenB >= 0; lenB--)
		{
			digit2 = s2[len2] - '0';
			trans += result[lenA + lenB + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = trans % 10;
			trans /= 10;
		}
		if (trans > 0)
			result[lenA + lenB + 1] += trans;
	}
	for (k = 0; k < lenC - 1; k++)
	{
		if (result[k])
			j = 1;
		if (j)
			_putchar(result[k] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
