#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet in reverse order using putchar function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char za = 'z';

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
