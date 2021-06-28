#include "holberton.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first paramter for the function swap_int
 * @b: second paramter for the function swap_int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
