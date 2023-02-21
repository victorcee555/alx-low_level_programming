#include "main.h"

/**
 * print_alphabet - void Function
 *
 * Description: Prints alphabet in lower case using cusom header functions
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		/* call the _putchar function in the main.h file */
		_putchar(a);
	}
	_putchar('\n');
}
