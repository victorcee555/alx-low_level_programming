#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - A function that converts binary to integer.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len, res;

	if (b == NULL)
		return (0);

	len = strlen(b);
	i = 0;
	res = 0;

	while (i < len)
	{
		if (b[i] == '0')
			res = res << 1;
		else if (b[i] == '1')
			res = (res << 1) | 1;
		else
			return (0);

		i++;
	}

	return (res);
}
