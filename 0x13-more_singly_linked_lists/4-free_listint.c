#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: a node that stores the address of the head node;
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
