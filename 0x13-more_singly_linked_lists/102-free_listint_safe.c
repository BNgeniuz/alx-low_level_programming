#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: ptr to first input
 *
 * Return: 0 (safe and free)
 */

size_t free_listint_safe(listint_t **h)
{
	size_t data = 0;
	listint_t *dump;
	int new;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		new = *h - (*h)->next;
		if (new > 0)
		{
			dump = (*h)->next;
			free(*h);
			*h = dump;
			data++;
		}
		else
		{
			free(*h);
			*h = NULL;
			data++;
			break;
		}
	}

	*h = NULL;

	return (data);
}
