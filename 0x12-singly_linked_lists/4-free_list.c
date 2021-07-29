#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
