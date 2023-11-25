#include "lists.h"

/**
 * add_nodeint - A function that adds a node at
 *               the beginning of a listint_t list
 *
 * @head: a pointer that stores that points to the head node.
 * @n: a variable containing data to be added to the new node
 *
 * Return: The New Node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
