#include "lists.h"

/**
 * print_listint - A functiom that prints all the
 *                 elements of a listint_t list.
 *
 * @h: a node that points to a the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num;
	
	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
