#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * int is_palindrome - checks if number is palindrome.
 * @s: string.
 *
 * Return: 1 if palindrome.
 *         0 if not palindrome.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (*s != s[len - 1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
