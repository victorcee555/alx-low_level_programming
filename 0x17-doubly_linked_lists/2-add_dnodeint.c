#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the
 *                beginning of a dlistint_t list.
 *
 * @head: a pointer to a pointer to the head node.
 * @n: a variable containing the data of the new node.
 *
 * Return: The new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	
	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
