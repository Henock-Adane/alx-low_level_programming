#include "holberton.h"
/**
 * print_alphabet_x10 - a function to print a to z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c_h, i;

	for (i = 0; i <= 9; i++)
	{
		for (c_h = 'a'; c_h <= 'z'; c_h++)
		{
			_putchar(c_h);
		}
		_putchar('\n');
	}
}
