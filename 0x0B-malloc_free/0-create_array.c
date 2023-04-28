#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of array.
 * @c: char to initialize array.
 *
 * Return: a pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	int *a;
	int i;

	a = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
	free(a);
}
