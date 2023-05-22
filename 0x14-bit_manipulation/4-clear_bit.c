#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at given index.
 * @n: number to clear bit.
 * @index: the index to clear.
 *
 * Return: 1 on success
 *         or -1 if error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numbits = sizeof(n) * 8;

	if (index >= numbits)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
