#include "holberton.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @strn: Given string
 * Return: char
 */
char *cap_string(char *strn)
{

	int i = 0;
	int c = 0;

	for (i = 0; strn[i] != '\0'; i++)
	{
		if (strn[i] == '\t')
		{
			strn[i] = ' ';
		}
		if (strn[i] == ' ' || strn[i] == '.' || strn[i] == '\n')
		{
			c = i + 1;
			if (strn[c] >= 'a' && strn[c] <= 'z')
			{
				strn[c] = strn[c] - 32;
			}
		}
	}
	return (strn);
}
