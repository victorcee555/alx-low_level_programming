#include "lists.h"

/**
 * insert_nodeint_at_index - a function that adds a node at an index
 *
 * @head: a pointer to the head node;
 * @idx: The index to add a node
 * @n: The data to be stored in the new node.
 *
 * Return: The new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	i = 0;
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}

		current = current->next;
		i++;
	}

	return (NULL);
}
