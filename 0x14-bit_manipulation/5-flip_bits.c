#include "main.h"


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
        unsigned int hold_val, count = 0;

        if (n == m)
                return (0);

        hold_val = n ^ m;
        
	while (hold_val > 0)
	{
		count += hold_val & 1;
		hold_val >>= 1;
	}

	numbits = count;

        return (numbits);
}
