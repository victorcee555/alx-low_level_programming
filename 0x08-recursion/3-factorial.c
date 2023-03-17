#include "main.h"

/**
 * factorial - A function.
 * Description: Calculates the factorial of a number.
 * @n: pointer to the number to calculate.
 *
 * Return: -1 if n is < 0.
 * 1 if n = 0.
 * factorial is n > 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
