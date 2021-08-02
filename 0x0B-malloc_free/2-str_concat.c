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

	x = 0;
	concat = malloc(sizeof(*s1 + *s2));

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
