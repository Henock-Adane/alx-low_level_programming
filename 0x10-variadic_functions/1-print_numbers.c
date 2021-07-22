#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: numbers of list's elements
 * Return: List sum.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 1;
	int value;

	va_list print;

	va_start(print, n);

	while (x <= n)
	{
		value = va_arg(print, int);
		printf("%d", value);


		if (separator != NULL && x != n)
		{
			printf("%s", separator);
		}
		x++;
	}

	va_end(print);
	printf("\n");

}
