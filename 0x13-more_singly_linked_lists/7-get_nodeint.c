#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 *                        node of a listint_t linked list.
 *
 * @head: a node storing the head of the list
 * @index: the index of the node to return
 *
 * Return: The nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	i = 0;
	node = head;
	while (i <= index)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);
}
