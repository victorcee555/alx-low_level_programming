#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun number of coins needed
 * to make achange for an amount of  money.
 * @argc: number of argument passed to main.
 * @argv: an array of pointer to the strings containing the arguments.
 *
 * Return: 0 on success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int num_coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	num_coins += cents / 25;
	cents %= 25;

	num_coins += cents / 10;
	cents %= 10;

	num_coins += cents / 5;
	cents %= 5;

	num_coins += cents / 2;
	cents %= 2;

	num_coins += cents;

	printf("%d\n", num_coins);

	return (0);
}
