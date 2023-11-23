#include "lists.h"


/**
 * add_node - A function that adds new node at
 *            the beginning of a list_t list.
 *
 * @head: a pointer storing the address of the head node
 * @str: a string to be added to the new node data
 *
 * Return: The new node.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->next = *head;
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	*head = newNode;

	return (newNode);
}
