#include "lists.h"

void insert_middle(dlistint_t ***h, dlistint_t **new_node, dlistint_t **curr);

/**
 * insert_dnodeint_at_index - inserts a node at a given index of a list
 * @h: ptr to first node
 * @idx: index to insert the node
 * @n: item to be inserted into node
 *
 * Return: address of new node, or else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_node = *h;
	dlistint_t *new_node;
	unsigned int index = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (curr_node)
	{
		if (index == idx)
		{
			insert_middle(&h, &new_node, &curr_node);
			return (new_node);
		}

		curr_node = curr_node->next;
		index++;
	}

	if (index == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

/**
 * insert_middle - inserts a node at a given index in the middle of a list
 * @h: ptr to first node
 * @new_n: new node to be inserted at index.
 * @curr_n: current node.
 *
 * Return: void
 */

void insert_middle(dlistint_t ***h, dlistint_t **new_n, dlistint_t **curr_n)
{
	(*new_n)->next = *curr_n;
	(*new_n)->prev = (*curr_n)->prev;

	if ((*curr_n)->prev)
		(*curr_n)->prev->next = *new_n;
	else
		**h = *new_n;

	(*curr_n)->prev = *new_n;
}
