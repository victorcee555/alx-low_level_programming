#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t
 *                 list and sets head to NULL.
 *
 * @head: a pointer to the head node
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
