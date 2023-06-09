#include "main.h"
/**
 * _puts_reursion - this is a function that prints a string
 * @s: inputs
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
