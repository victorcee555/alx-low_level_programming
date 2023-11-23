#include "lists.h"


/**
 * add_node_end - A function that adds a node
 *                at end of a list_t lst.
 *
 * @head: A pointer storing the address of the head node
 * @str: string value to be added to the node.
 *
 * Return: The New Node or NULL if failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	current = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (current == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next !=  NULL)
		current = current->next;
	current->next = newNode;

	return (newNode);

}
