#include "holberton.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: The argument to be passed for the _isupper function
 *
 * Return: 1 if character is uppercase, 0 if not
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
