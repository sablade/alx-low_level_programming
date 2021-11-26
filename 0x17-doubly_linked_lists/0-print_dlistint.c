#include "lists.h"
/**
 * print_dlistint_t - Prints all the elements in a doubly linked list
 * @h: Pointer to Head
 * Return: Returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t elem;

	temp = h;
	while (temp && temp->prev)
		temp = temp->prev;
	for (elem = 0; temp; elem++; temp = temp -> next)
		printf("%d\n", temp->n);
	return (elem);
}
