#include "lists.h"

/**
 * print_dlistint - A function that prints all the
 *                  elements of a dlistint list.
 * @h: a pointer to the head node.
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
