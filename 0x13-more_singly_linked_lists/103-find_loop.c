#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *currentf;

	current = currentf = head;

	while (current != NULL && currentf != NULL)
	{
		current = current->next;
		currentf = currentf->next->next;

		if (current == currentf)
		{
			current = head;
			while (current != currentf)
			{
				current = current->next;
				currentf = currentf->next;
			}
			return (current);
		}
	}

	return (NULL);
}
