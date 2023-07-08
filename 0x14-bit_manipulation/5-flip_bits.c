#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that returns the number of bits you
 *             will need to flip to get from one number to another.
 *
 * @n: The integer storing the first number.
 * @m: The integer storing the second number.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int check, count;

	check = m ^ n;
	count = 0;
	while (check > 0)
	{
		if (check & 1)
			count++;
		check = check >> 1;
	}

	return (count);
}
