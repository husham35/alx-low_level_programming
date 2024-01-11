#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @h: address of ptr to first node
 * @index: index of node to delete
 *
 * Return: 1 if successful, otherwise -1.
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *curr_node = *h;
	unsigned int idx = 0;

	if (*h == NULL)
		return (-1);

	if (index == 0)
	{
		curr_node = curr_node->next;
		free(*h);
		curr_node ? curr_node->prev = NULL : NULL;
		*h = curr_node;
		return (1);
	}

	while (curr_node)
	{
		if (idx == index)
		{
			curr_node->prev->next = curr_node->next;
			if (curr_node->next)
				curr_node->next->prev = curr_node->prev;
			free(curr_node);
			return (1);
		}

		curr_node = curr_node->next;
		idx++;
	}

	return (-1);
}
