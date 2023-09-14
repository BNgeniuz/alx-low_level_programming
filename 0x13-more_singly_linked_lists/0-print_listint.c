#include "lists.h"

/**
 * print_listint - functions that prints all the
 * elements of a linked list
 *
 * @h: ptr to first input
 * Return: 0 (linked list nodes)
 */
size_t print_listint(const listint_t *h)
{
	size_t l;

	l = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	l++;
	}

	return (l);
}
