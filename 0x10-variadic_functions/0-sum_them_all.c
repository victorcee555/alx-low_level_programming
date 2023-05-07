#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters.
 * @n: function delimeter.
 * @...: variable parameter.
 *
 * Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int result = 0;

	va_list(sum_them_all);

	va_start(sum_them_all, n);

	if (n == 0)
		return (0);

	for (i = n; i > 0; i--)
	{
		result += va_arg(sum_them_all, int);
	}

	return (result);
}
