#include "main.h"

/**
 * _strlen_recursion - A function.
 * Description: Calculates the length of a string.
 * @s: pointer to string to calculate.
 *
 * Return: if string is not Length of string.
 * if null return 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
