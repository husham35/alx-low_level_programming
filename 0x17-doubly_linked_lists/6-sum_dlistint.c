#include "lists.h"

/**
 * sum_dlistint - adds up items in a doubly linked list
 * @head: ptr to first node
 *
 * Return: sum of integers in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	int sum = 0;

	if (!head)
		return (0);

	while (curr_node)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);
}
