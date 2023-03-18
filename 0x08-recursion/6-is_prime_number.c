#include "main.h"

int is_prime_number(int n);
int _prime_check(int n, int i);

/**
 * is_prime_number - checks prime number.
 * @n: integer.
 *
 * Return: _prime_check.
 */

int is_prime_number(int n)
{
	int i = n / 2;

	return (_prime_check(n, i));
}

/**
 * _prime_check - checks prime number.
 * @n: integer.
 * @i: iterator.
 *
 * Return: 0 if not prime.
 *         1 if prime.
 */

int _prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	return (_prime_check(n, i - 1));
}
