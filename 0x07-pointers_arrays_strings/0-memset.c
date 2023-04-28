#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the constant.
 * @b: The constant.
 * @n: number of bytes to fill.
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
