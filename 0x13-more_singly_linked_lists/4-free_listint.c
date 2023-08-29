#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: ptr first input
 *
 * Return: 0 (free)
 */

void free_listint(listint_t *head)
{
	listint_t *dump;

	while (head)
	{
		dump = head->next;
		free(head);
		head = dump;
	}
}
