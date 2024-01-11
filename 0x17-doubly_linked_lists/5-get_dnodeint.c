#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: ptr to first node
 * @index: index of node to find
 *
 * Return: Node, or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node = head;
	unsigned int idx;

	if (!head)
		return (NULL);

	for (idx = 0; curr_node; idx++)
	{
		if (idx == index)
			return (curr_node);
		curr_node = curr_node->next;
	}

	return (NULL);
}
