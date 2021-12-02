#include "lists.h"

/**
 * free_dlistint - free a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
