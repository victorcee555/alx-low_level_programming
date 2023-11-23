#include "lists.h"

/**
 * print_list - A function.
 * Description: A function that prints
 * all the elements of a list_t list.
 *
 * @h: a node that'll hold the value of the head node.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num;
	
	num = 0;
	while (h != NULL || *h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
