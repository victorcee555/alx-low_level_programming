#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a node
 *                    at the end of dlistint_t list.
 *
 * @head: a pointer to a pointer to the head node.
 * @n: The data for the new node
 *
 * Return: The new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
