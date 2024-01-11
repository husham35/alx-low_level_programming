#include "lists.h"

/**
 * add_dnodeint_end - inserts new node at the end of a doubly linked list
 * @head: ptr to first node
 * @n: item to insert into node.
 *
 * Return: Pointer to the newly added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr_node;

	curr_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (curr_node)
		while (curr_node->next)
			curr_node = curr_node->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = curr_node;

	if (*head == NULL)
		*head = new_node;
	else
		curr_node->next = new_node;

	return (new_node);
}
