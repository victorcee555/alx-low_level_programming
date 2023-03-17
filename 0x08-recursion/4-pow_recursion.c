#include "main.h"

/**
 * _pow_recursion - A function.
 * Description: Calculates the value of x raised to y.
 * @x: Base.
 * @y: Power.
 *
 * Return:
 * -1 if y is lower than 0.
 *  power of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
