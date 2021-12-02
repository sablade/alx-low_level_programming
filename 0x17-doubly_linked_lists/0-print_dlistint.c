#include "lists.h"
/**
 * print_dlistint - Prints all the elements in a doubly linked list
 * @h: Pointer to Head
 * Return: Returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t elem = 0;

	tmp = h;
	if (h == NULL)
	{
		printf("Empty List");
		return;
	}
	while (tmp != NULL)
	{
		elem++;
		printf("%d\n", h->next);
		h = h->next;
	}
	return (elem);
}
