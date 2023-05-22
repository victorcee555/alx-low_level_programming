#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a given bit at an index.
 *
 * @index: the index of the bit we want to return.
 * @n: the number
 *
 * Return: the value of the bit at index
 *         or -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	if ((n || index) < 0)
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
