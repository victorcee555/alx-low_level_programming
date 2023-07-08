#include "main.h"
#include <stdio.h>

/**
 * set_bit - A function that sets the value of
 *           a bit to 1 at given index.
 *
 * @n: a pointer to an int storing the bits.
 * @index: the int storing the index value.
 *
 * Return: 1 if worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index if greater than number of bits */
	if (index >= sizeof(n) * 8)
		return (-1);

	/* set bit to 1 and index */
	*n |= 1 << index;

	return (1);
}
