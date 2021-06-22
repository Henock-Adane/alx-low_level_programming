#include "holberton.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c_h;

	for (c_h = 0; c_h < sizeof(holberton); c_h++)
	{
		_putchar(holberton[c_h]);
	}
	_putchar('\n');
	return (0);
}
