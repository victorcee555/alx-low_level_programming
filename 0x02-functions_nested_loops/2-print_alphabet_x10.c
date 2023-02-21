#include "main.h"

/**
 * print_alphabet_x10 - Function
 *
 * Description: prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int line10, az;

	for (line10 = 0; line10 < 10; line10++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
