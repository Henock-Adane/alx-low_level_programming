#include "holberton.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: Given string.
 * Return: char s.
 */
char *cap_string(char *s)
{

	int i = 0;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n')
		{
			c = i + 1;
			if (s[c] >= 'a' && s[c] <= 'z')
			{
				s[c] = s[c] - 32;
			}
		}
	}
	return (s);
}
