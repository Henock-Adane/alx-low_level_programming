#include "holberton.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: Given string
 * Return: char
 */
char *cap_string(char *str)
{

	int i = 0;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\n')
		{
			c = i + 1;
			if (str[c] >= 'a' && str[c] <= 'z')
			{
				str[c] = str[c] - 32;
			}
		}
	}
	return (str);
}
