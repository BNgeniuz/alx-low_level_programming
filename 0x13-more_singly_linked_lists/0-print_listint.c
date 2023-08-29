#include "lists.h"
#include <stddef.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: singly linked list type to prints
 *
 * Return: 0 (linked list nodes)
 */

size_t print_listint(const listint_t *h)
{
	size_t base = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		base++;
	}

	return (base);
}
