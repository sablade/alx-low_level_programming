#include "lists.h"
/**
 * print_dlistint - Prints all the elements in a doubly linked list
 * @h: Pointer to Head
 * Return: Returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elem);
}
