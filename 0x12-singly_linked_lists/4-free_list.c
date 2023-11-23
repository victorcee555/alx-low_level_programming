#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 *
 * @head: a pointer of type list_t that stores the head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while (head)
	{
		current = head;
		head = head->next;

		free(current->str);
		free(current);
	}
}
