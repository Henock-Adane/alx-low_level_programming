#include "holberton.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: paramters for the function puts_half
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, a;
	char l;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = (i + 1) / 2;
	for (; str[a] != 0; a++)
	{
		l = str[a];
		_putchar(l);
	}
	_putchar('\n');

}
