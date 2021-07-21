#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: Pointer to a function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;


	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}
