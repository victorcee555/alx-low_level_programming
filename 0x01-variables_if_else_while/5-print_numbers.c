#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digits of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
