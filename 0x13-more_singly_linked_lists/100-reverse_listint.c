#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold;
	listint_t *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	hold = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (hold != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = hold;
		hold = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
