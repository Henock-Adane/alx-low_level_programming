#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * @s: a paramters for the function rev_string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int f, str_r;
	char character;

	for (f = '\0'; s[f] != 0; f++)
	{
	}
	str_r = 0;
	for (f = f - 1; str_r < f; str_r++)
	{
		character = s[f];
		s[f] = s[str_r];
		s[str_r] = character;
		f--;
	}
}
