#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: ptr first input
 *
 * Return: 0 (backward)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *backward = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}

	*head = backward;

	return (*head);
}
