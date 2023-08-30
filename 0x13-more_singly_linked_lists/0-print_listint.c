#include "lists.h"

/**
 * print_listint - functions that prints all the elements of a linked list
 * @h: ptr to first input
 *
 * Return: 0 (linked list nodes)
 */
size_t print_listint(const listint_t *h)
{
	size_t read = 0;

	while (h)
	{
		printf("%d\n", h->n);
		read++;
		h = h->next;
	}

	return (read);
}
