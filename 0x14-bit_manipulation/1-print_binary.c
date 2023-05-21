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
	int mask = 1;
	int check = 0;
	
	while (n > 0)
	{
		check = n & mask;
		if (check)
			_putchar(1 + '0' );
		if (!check)
			_putchar(0 + '0');
		check = 0;
		n >>= 1;
	}

}
