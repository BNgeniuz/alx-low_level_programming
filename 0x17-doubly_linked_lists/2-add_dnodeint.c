#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - new node at beginning of a dlistint_t list
 *
 * @head: head list input
 * @n: no of input
 * Return: 0 (success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh;
	dlistint_t *f;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->prev = NULL;
	f = *head;

	if (f != NULL)
	{
		while (f->prev != NULL)
			f = f->prev;
	}

	fresh->next = f;

	if (f != NULL)
		f->prev = fresh;

	*head = fresh;

	return (fresh);
}
