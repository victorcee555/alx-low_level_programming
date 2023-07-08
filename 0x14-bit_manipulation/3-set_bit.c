#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the value of a bit to 1 at given index.
 * @n: pointer to the number to manipulate
 * @index: the index we want to set.
 *
 * Return: 1 on success
 *         or -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numbits = sizeof(n) * 8;

	if (index >= numbits)
		return (-1);

	*n = *n | (1 << index);

	return (1);

}
