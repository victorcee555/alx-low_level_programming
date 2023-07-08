#include "main.h"

/**
 * get_endianness - a function that checks endianess.
 *
 * Return: 0 if big endian, 1 if small endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *a;

	a = (char *) &i;

	if (*a == 1)
		return (1);
	else
		return (0);
}
