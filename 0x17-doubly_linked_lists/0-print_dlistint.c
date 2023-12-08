#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - elements of a dlistint_t list
 *
 * @h: head list input
 * Return: 0 (success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int read;

	read = 0;

	if (h == NULL)
		return (read);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		read++;
		h = h->next;
	}

	return (read);
}
