#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of chars
  *and initializes it with a specific char.
 * @size: size of the array
 * @c: character to be initialized
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
	{
		array = malloc(size * sizeof(char));
	}
	else
	{
		return (NULL);
	}

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
