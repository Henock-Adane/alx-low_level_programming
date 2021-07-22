#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: numbers of elements
 * Return: total sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, total = 0;
	va_list argpm;

	va_start(argpm, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		total += va_arg(argpm, int);
	va_end(argpm);
	return (total);
}
