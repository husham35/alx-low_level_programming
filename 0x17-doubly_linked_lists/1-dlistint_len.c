#include "lists.h"

/**
 * dlistint_len - returns length of a doubly linked list
 * @h: ptr to first node.
 *
 * Return: number of nodes in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	size_t len = 0;

	while (curr_node)
	{
		len++;
		curr_node = curr_node->next;
	}

	return (len);
}
