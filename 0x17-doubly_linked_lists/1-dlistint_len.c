#include "lists.h"

/**
 * dlistint_len - A function that returns the number of
 *                elements in a linked dlistint_t list.
 * @h: a pointer to the head node
 *
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->n)
			num++;
		h = h->next;
	}

	return (num);
}
