#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter.
 * @str: char variable
 *
 * Return: newstr or NULL
 */

char *_strdup(char *str)
{
	char *newstr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	newstr = malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	while (j <= i)
	{
		newstr[j] = str[j];
		j++;
	}
	return (newstr);
}
