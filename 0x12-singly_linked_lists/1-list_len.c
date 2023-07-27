#include "lists.h"

/**
 * list_len - prints the length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements/members in linked list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
