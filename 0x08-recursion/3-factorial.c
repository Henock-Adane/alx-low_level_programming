#include "holberton.h"
/**
 * factorial - a function that returns the factorial of a given number.
 *@n: Given number
 *Return: the factorial of a number or -1 if the number is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
