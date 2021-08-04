#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: Linked list.
 * Return: Inverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *temp;

	if (*head == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		temp = current->next;
		current->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
