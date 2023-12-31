#include "lists.h"

/**
 * count_nodes_till_loop - count nodes to know now many unique nodes to print
 * @head: pointer to head pointer of linked list
 * Return: number of unique nodes in list before a loop
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *current, *currentf;

	current = currentf = head;

	while (current != NULL && currentf != NULL)
	{
		current = current->next;
		currentf = currentf->next->next;
		count++;

		if (current == currentf)
		{
			current = head;
			while (current != currentf)
			{
				current = current->next;
				currentf = currentf->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * loop - find if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */
int loop(const listint_t *head)
{
	const listint_t *current, *currentf;

	current = currentf = head;

	while (current != NULL && currentf != NULL)
	{
		current = current->next;
		currentf = currentf->next->next;

		if (current == currentf)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t number_of_nodes = 0;
	const listint_t *temp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1)
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			number_of_nodes += 1;
			temp = temp->next;
		}
	}
	else if (loop_found == 0)
	{
		temp = head;
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			number_of_nodes += 1;
			temp = temp->next;
		}
	}

	return (number_of_nodes);
}
