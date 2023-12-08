#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - sum of all the data (n) of a doubly linked list
 *
 * @head: head input list
 * Return: total data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
