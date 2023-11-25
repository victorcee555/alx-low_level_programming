#include "lists.h"

/**
 * listint_len - A function that returns the number
 *               of elements in linked listint_t
 *
 * @h: a node that points to the head of the list
 *
 * Return: The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
