#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: Linked list.
 * Return: Inverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *frente, *fondo;

	if (head == NULL || *head == NULL)
		return (NULL);

	fondo = NULL;

	while ((*head)->next != NULL)
	{
		frente = (*head)->next;
		(*head)->next = fondo;
		fondo = *head;
		*head = frente;
	}

	(*head)->next = fondo;

	return (*head);
}
