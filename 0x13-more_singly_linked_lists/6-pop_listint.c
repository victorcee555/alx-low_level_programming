#include "lists.h"

/**
 */

int pop_listint(listint_t **head)
{
	listint_t *current, *nextNode;
	int node;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	node = current->n;
	nextNode = current->next;
	current->next = NULL;
	*head = nextNode;

	free(current);

	return (node);

}
