#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in new node
 * Return: Address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	last = *head;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next == NULL;
	if (*head == NULL)
	{
		new->prev == NULL;
		*head = new;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
