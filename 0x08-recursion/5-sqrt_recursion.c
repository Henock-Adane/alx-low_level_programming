#include "holberton.h"
/**
 * calculate - helps to calculate the square root
 *@n: number
 *@i: increment
 *Return: the square root
 */
int calculate(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
		return (calculate(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 *@n: Given number
 *Return: 0 if n == 0, 1 if n == 1, -1 if n < 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (calculate(n, 1));
}
