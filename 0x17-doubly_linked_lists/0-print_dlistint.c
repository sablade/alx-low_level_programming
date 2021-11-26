#include "lists.h"
/**
 * print_dlistint - Prints all the elements in a doubly linked list
 * @h: Pointer to Head
 * Return: Returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t elem;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;
	for (elem = 0; tmp; elem++; tmp = tmp->next)
		printf("%d\n", tmp->next);
	return (elem);
}
