#include "holberton.h"
/**
 * _isalpha - function to check for alphabetic character
 * @c: is an integer parameter for the _isalpha function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
