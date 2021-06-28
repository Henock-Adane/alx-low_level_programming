#include "holberton.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: paramter for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}
