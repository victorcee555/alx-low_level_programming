#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint list
 *
 * @head: A pointer to the head node.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		exit(1);

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
