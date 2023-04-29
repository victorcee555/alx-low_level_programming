#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 *
 * Return: a pointer.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
		_putchar('\n');
	}

	return (arr);
}
