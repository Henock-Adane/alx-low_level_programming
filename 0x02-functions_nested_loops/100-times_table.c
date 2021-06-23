#include "holberton.h"
#include <unistd.h>

/**
 * print_times_table- prints the n times table, starting with 0.
 * @n: an input parameter for the function
 *
 */

void print_times_table(int n)
{
	int a;
	int b;
	int z;
	int y;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b += 1)
		{
			_putchar('0');
			for (a = 1; a <= n; a += 1)
			{
				y = a * b;
				_putchar(',');
				_putchar(' ');
				x = y % 10;
				z = y / 10;
				if (y >= 100)
				{
					_putchar(z / 10 + '0');
					_putchar(y / 10 % 10 + '0');
					_putchar(x + '0');
				}
				else if (y >= 10 && y < 100)
				{
					_putchar(' ');
					_putchar(z + '0');
					_putchar(x + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(y % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
