#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguements
 * @argc: the number of arguements to main
 * @argv: an array of pointer to the string containing the argurements
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	int result = 1;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (0);
}
