#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print numbers in base 16 with putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char af;
	char i = '0';

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (af = 'a'; af <= 'f'; af++)
	{
		putchar(af);
	}
	putchar('\n');
	return (0);
}
