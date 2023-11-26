#include "lists.h"

/**
 * sum_listint - a function that adds all the
 *               data of a listint_t linked list.
 *
 * @head: a node pointing to the head of a list.
 *
 * Return: the sum of all the data in the list.
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
