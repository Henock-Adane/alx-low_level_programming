#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum_n = 0;

	while (head)
	{
		sum_n += head->n;
		head = head->next;
	}

	return (sum_n);
}
