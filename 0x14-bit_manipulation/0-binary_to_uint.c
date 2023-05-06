#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number or 0 if fail.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;
	int i = 0;

	while (*b[i] != '\0')
	{
		if (*b[i] == '0')
		{
			result = result << 1;
		}
		else if (*b[i] == '1')
		{
			result = ((result << 1) | 1);
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (result);
}
