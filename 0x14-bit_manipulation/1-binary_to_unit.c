#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints the decimal representation of a binary.
 * @n: integer storing binary value.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int trail;

	trail = 0;
	i = (sizeof(int) * 4) - 1;
	while (i > 0)
	{
		if (n & (1 << i) == 0)
		{
			if (trail == 0)
				continue;
			else
				_putchar(0 + '0');
		}
		if (n & (1 << i) > 1)
		{
			trail = 1;
			_putchar(1 + '0');
		}

		i--;
	}
}
