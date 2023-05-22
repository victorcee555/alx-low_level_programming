#include "main.h"
#include <stdio.h>

/**
* print_binary - converts decimal to binary.
* @n: an unsifned integer that holds binary value.
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8- 1);
	int check_zero = 1;
	
	for (i = 0; i < sizeof(n) * 8 - 1; i++)
	{
		if (n & mask)
			_putchar(1 + '0' );
		else if (!check_zero)
			_putchar(0 + '0');

		mask >>= 1;
	}

}
