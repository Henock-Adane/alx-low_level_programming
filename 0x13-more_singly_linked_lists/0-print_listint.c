#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list_t variable
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}