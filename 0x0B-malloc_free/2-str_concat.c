#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * or a pointer for the newly-allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, x;
	char *concat;
	int count;
	int counter = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count] || s2[count]; count++)
		counter++;
	x = 0;
	concat = malloc(sizeof(char) * counter);

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		concat[x] = s1[i];
		i++;
		x++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat[x] = s2[j];
		j++;
		x++;
	}

	return (concat);
	free(concat);
}
