#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: ptr first input
 *
 * Return: 0 (free)
 */

void free_listint2(listint_t **head)
{
	listint_t *dump;

	if (head == NULL)
		return;

	while (*head)
	{
		dump = (*head)->next;
		free(*head);
		*head = dump;
	}

	*head = NULL;
}
