#include "holberton.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is an integer argument for the -abs function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
