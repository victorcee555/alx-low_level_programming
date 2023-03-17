#include "main.h"

/**
 * _print_rev_recursion - A function.
 * Description: Prints strings in reverse.
 * @s: pointer to string to print.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
