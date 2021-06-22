#include "holberton.h"
/**
 * print_alphabet - a function to print a to z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c_h;

	for (c_h = 'a'; c_h <= 'z'; c_h++)
	{
		_putchar(c_h);
	}
	_putchar('\n');
}
