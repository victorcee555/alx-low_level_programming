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
	char *a;
	int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; size > 0; i++, size--)
		a[i] = c;

	return (a);
	free(a);
}
