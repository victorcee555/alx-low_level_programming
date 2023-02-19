#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet except q & e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
		return (0);
}
