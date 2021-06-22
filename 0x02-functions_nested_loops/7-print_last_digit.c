#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is an integer parameter for the print_last_digit function
 * Return: 0
 */
int print_last_digit(int c)
{{
		int d  = (c % 10);

		if (d < 0)
		{
			d  = (d  * -1);
			_putchar(d + '0');
		}
		else
		{
			_putchar(d + '0');
		}
		return (d);
	}
