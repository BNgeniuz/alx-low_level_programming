#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - new node at end of a dlistint_t list
 *
 * @head: head list input
 * @n: number of input
 * Return: 0 (success)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *f;
	dlistint_t *fresh;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	f = *head;

	if (f != NULL)
	{
		while (f->next != NULL)
			f = f->next;
		f->next = fresh;
	}
	else
	{
		*head = fresh;
	}

	fresh->prev = f;

	return (fresh);
}
