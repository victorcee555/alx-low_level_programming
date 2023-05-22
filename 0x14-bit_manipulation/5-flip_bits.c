#include "main.h"

unsigned int checkBits(unsigned int n);

/**
 * flip_bits - a function that returns the number of bits you would
 *             need to flip to get from one number to another.
 *
 * @n: an unsigned int holding the first number.
 * @m: an unsigned int holding the second number.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;
	unsigned int hold_val;
	unsigned int zero = 0;

	if (n < zero || m < zero)
		return (-1);

	hold_val = n ^ m;
	numbits = checkBits(hold_val);

	return (numbits);
}

/**
 * checkBits - a function that count number of bits needed to
 *             flip to get from one number to another.
 *
 * @n: the number to count bits
 *
 * Return: number of bits.
 */


unsigned int checkBits(unsigned int n)
{
	unsigned int count = 0;

	while (n != 0)
	{
		count += n & 1;

		n >>= 1;
	}

	return (count);
}
