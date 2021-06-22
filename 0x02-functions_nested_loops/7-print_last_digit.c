#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is an integer parameter for the print_last_digit function
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
		int d = c % 10;
		_putchar (d + '0');
		return (d);
	}
	else
	{
		c = c * -1;
		_putchar (d + '0');
		return (d);
	}
}
