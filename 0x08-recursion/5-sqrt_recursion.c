#include "main.h"

int _sqrt_recursion(int n);
int _sqrt(int num, int root);

/**
 * _sqrt - Finds the natural square root of a number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: the square root if the number has a natural square root.
 * 	   -1 if the number doesnt have a natural square root.
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: the natural square root if the number has a natural square root.
 * 	   -1 if the number doesnt have a natural square root.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
