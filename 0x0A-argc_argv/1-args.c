#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguement
 * @argc: the number of arguements to main
 * @argv: a pointer to the string containing the arguements
 *
 * Return: (0).
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
