#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring.
 *@haystack: String.
 *@needle: Substring.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, b;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		b = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0'
		       && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + b);
		i = b + 1;
	}
	return ('\0');
}
