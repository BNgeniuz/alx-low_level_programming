#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - ret num of elements in a double linked list
 *
 * @h: head list input
 * Return: 0 (success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int read;

	read = 0;

	if (h == NULL)
		return (read);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		read++;
		h = h->next;
	}

	return (read);
}
