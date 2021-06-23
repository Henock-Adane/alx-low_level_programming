#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is an integer parameter for the print_last_digit function
 * Return: 0
 */
int print_last_digit(int c)
{
	int r = c % 10;

	if (c > 0 || c == 0)
	{
		_putchar (r + '0');
		return (r);
	}
	else
	{
		r = r * -1;
		_putchar (r + '0');
		return (r);
	}
}
