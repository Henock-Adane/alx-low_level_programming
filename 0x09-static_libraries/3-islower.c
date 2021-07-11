#include "holberton.h"
/**
 * _islower - a function to check for lowercase character
 * @c: is an integer parameter in the _islower function to check lowercases
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
