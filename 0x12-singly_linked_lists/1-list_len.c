#include "lists.h"

/**
 * list_len - A function that returns the number
 *            of elements in a linked list_t list.
 *
 * *h: a pointer that stores the address of the head node.
 *
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num;

	temp = h;
	num = 0;
	while (temp)
	{
		temp = temp->next;
		num++;
	}

	return (num);
}
