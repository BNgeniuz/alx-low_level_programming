#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - dlistint_t linked list node deletion
 *
 * @head: head input list
 * @index: new node index
 * Return: 0 (success)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x;
	dlistint_t *y;
	unsigned int l;

	x = *head;

	if (x != NULL)
		while (x->prev != NULL)
			x = x->prev;

	l = 0;

	while (x != NULL)
	{
		if (l == index)
		{
			if (l == 0)
			{
				*head = x->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				y->next = x->next;

				if (x->next != NULL)
					x->next->prev = y;
			}

			free(x);
			return (1);
		}
		y = x;
		x = x->next;
		l++;
	}

	return (-1);
}
