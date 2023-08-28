#include "lists.h"
#include <stddef.h>

/**
 * listint_len - unction that returns the number of
 * elements in a linked listint_t list
 * @h: singly linked list input
 *
 * Return: 0 (return singly)
 */

size_t listint_len(const listint_t *h)
{
	int base;

	base = 0;

	while (h != NULL)
	{
		h = h->next;
		base++;
	}
	return (base);
}
