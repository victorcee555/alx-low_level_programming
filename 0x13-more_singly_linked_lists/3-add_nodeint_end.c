#include "lists.h"

/**
 * add_nodeint_end - A function that adds a node
 *                   at the end of a listint_t list.
 *
 * @head: a pointer to the head node of a list
 * @n: a variable that stores the value for the new node
 *
 * Return: The new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	current = *head;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = newNode;

	return (newNode);
}
