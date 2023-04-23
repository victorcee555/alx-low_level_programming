#include "main.h"
#include <stdio.h>

/*
 * main - prints the mane of a progam
 * argc - number of arguements to main.
 * argv - a pointer to the strings containing the arguements
 *
 * Return: (0).
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
