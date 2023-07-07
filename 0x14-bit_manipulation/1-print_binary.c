#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints the decimal
 *                representation of a binary.
 * @n: integer storing binary value.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, i;
	int trail;

	trail = 1;
	mask = 1UL << (sizeof(n) * 8 - 1);
	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if (n & mask)
		{
			trail = 0;
			printf("1");
		}
		else if (!trail)
			printf("0");

		mask >>= 1;
	}
	if (trail)
		printf("0");
}
