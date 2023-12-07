#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *                         of a dlistint_t linked list.
 *
 * @head: a pointer to the head node.
 * @index: the index of the node, starting from 0
 *
 * Return: The node or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	i = 0;
	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
