#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all
 *                the data(n) of a dlistint_t linked list.
 *
 * @head: A pointer to the head node.
 *
 * Return: The sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int n;
	dlistint_t *current;

	if (head == NULL)
		return (0);
	n = 0;
	current = head;
	while (current != NULL)
	{
		n += current->n;
		current = current->next;
	}

	return (n);
}
