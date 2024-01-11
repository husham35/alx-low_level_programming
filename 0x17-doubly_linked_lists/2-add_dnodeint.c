#include "lists.h"

/**
 * add_dnodeint - inserts a node at the beginning of doubly linked list
 * @head: ptr to first node in the list.
 * @n: item to insert into node.
 *
 * Return: Pointer to the newly added node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
