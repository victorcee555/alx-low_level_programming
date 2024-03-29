#include "main.h"

/**
 * _puts_recursion - A function.
 * Description: Prints a string, followed by a new line.
 * @s: pointer to string to print.
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
