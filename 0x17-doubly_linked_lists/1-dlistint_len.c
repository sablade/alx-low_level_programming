#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to LL
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t elem;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;
	for (elem = 0; tmp; elem++, tmp = tmp->next)
		;
	return (elem);
}
