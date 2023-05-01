#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory a 2d array.
 * @grid: array to free,
 * @height: height of the array.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
