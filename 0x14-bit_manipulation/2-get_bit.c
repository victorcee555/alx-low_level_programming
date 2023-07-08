#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value
 *           of a bit at a given index.
 *
 * @n: The bit to check.
 * @index: The index of the bit to be checked.
 *
 * Return: The value of the bit at index
 *         or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit  = (n >> index) & 1;

	return (bit);
}
