#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: parameter for array
 * @size: parameter for size
 * @action: paramter for action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
