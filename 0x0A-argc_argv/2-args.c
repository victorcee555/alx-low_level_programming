#include "main.h"
#include <stdio.h>

/**
 * main - print all arguements passed to a program
 * @argc: number of arguements
 * @argv: an array of pointer to the srings containing the arguements
 *
 * Return: (0).
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
