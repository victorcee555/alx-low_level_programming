#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 *
 * @head: a pointer to the head node.
 *
 * Return: the head node's data.
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
