#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new
 *                            node at a given position.
 *
 * @h: a pointer to a pointer to the head node.
 * @idx: the index of the list where the new node should be added
 *       starting at 0.
 * @n: The data for the new node
 *
 * Return: The new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newNode;
	unsigned int num;

	newNode = malloc(sizeof(dlistint_t));

	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;

	if (*h == NULL)
	{
		newNode->next = *h;
		*h = newNode;

		return (newNode);
	}

	num = 0;
	current = *h;
	while (num <= idx)
	{
		if (num == idx)
		{
			current->prev->next = newNode;
			newNode->prev = current->prev;
			newNode->next = current;
			current->prev = newNode;
			return (newNode);
		}
		num++;
		current = current->next;
	}

	return (NULL);
}
