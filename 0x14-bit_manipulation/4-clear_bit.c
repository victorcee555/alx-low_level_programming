#include "main.h"
#include <stdio.h>

/**
 * clear_bit - A function that sets the value
 *             of a bit to 0 at a given index.
 *
 * @n: A pointer to an int storing the bits.
 * @index: the  integer storing the index.
 *
 * Return: 1 on success, -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
