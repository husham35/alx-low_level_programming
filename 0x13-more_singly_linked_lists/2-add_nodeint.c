#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to head pointer of linked list
 * @index: index of node to delete starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *h;
	unsigned int i;

	i = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		h = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		h->next = current->next;
	else
		h->next = NULL;

	free(current);
	return (1);
}
