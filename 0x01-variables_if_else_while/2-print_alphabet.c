#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: use putchar to print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
