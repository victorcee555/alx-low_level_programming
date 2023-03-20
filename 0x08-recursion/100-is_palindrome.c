#include "main.h"
#include <stdio.h>
#include <string.h>

int is_palindrome(char *s);
int check_palindrome(char *s, int left, int right);

/**
 * is_palindrome - checks if number is palindrome.
 * @s: string.
 *
 * Return: 1 if palindrome.
 *         0 if not palindrome.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - checks if a number is palindrome.
 * @s: string to check.
 * @right: integer.
 * @left: integer.
 *
 * Return: 0 if not palindrome.
 *         1 if palindrome.
 */

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (check_palindrome(s, left + 1, right - 1));
	else return(0);
}
