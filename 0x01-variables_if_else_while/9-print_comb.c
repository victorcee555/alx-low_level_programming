#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints allthe possible combination of single digits
 *
 * Return: Always 0;
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
