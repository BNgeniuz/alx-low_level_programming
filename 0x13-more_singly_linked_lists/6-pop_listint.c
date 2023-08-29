#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 *
 * @head: ptr first input to delete
 *
 * Return: 0 (deleting)
 */

int pop_listint(listint_t **head)
{
	listint_t *dump;

	int base;

	if (!head || !*head)
		return (0);

	base = (*head)->n;
	dump = (*head)->next;
	free(*head);
	*head = dump;

	return (base);
}
