#include "lists.h"
#include <stddef.h>
/**
 * print_listint - unction that prints all the elements of a listint_t list
 * @h: singly linked list type to prints
 *
 * Return: 0 (linked list nodes)
 */

size_t print_listint(const listint_t *h)
{
	int base = 0;

	while (h)
	{
		printf("%d\n", h->n);
		base++;
		h = h->next;
	}
	return (base);
}
