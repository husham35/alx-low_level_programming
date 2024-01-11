#include "lists.h"

/**
 * print_dlistint - prints items(nodes) of a doubly linked list
 * @h: ptr to first node in
 *
 * Return: number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	int elems = 0;

	while (curr_node)
	{
		printf("%d\n", curr_node->n);
		elems++;
		curr_node = curr_node->next;
	}

	return (elems);
}
