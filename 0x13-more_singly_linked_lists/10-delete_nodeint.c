#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @index: index at the begining of node
 * @head: ptr first input
 *
 * Return: 0 (deleting)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dump = *head;
	listint_t *new = NULL;

	unsigned int l = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(dump);
	return (1);
	}

	while (l < index - 1)
	{
	if (!dump || !(dump->next))
	return (-1);
	dump = dump->next;
	l++;
	}
	new = dump->next;
	dump->next = new->next;
	free(new);
	return (1);
}
