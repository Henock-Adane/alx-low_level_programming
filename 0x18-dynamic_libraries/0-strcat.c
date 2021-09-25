#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 *@dest: Destination value.
 *@src: Source value
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
