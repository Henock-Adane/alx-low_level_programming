#include "holberton.h"
/**
 * _memset - a function that fills memory with a constant byte
 *@s: A given string.
 *@b: A constant byte.
 *@n: Bytes of the memory area
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
