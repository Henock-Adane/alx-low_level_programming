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

	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;
			if (needle[j] == '\0')
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
