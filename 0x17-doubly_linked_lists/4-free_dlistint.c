#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: ptr to first node
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	dlistint_t *prev = head;

	if (!head)
		return;

	while (curr_node->next)
	{
		curr_node = curr_node->next;
		free(prev);
		prev = curr_node;
	}
	free(curr_node);
}
