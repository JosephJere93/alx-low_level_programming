#include "main.h"

/**
 * Print a string followed by a new line.
 * @s: pointing string
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s +1);
	}

	else
	_putchar('\n');
}
