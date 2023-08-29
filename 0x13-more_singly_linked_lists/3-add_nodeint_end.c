#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list
 *
 * @n: address of the new element,
 * @head: ptr of the first input
 *
 * Return: 0 (end of the node)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *data;
	listint_t *dump = *head;

	data = malloc(sizeof(listint_t));

	if (!data)
		return (NULL); /* malloc failed */

	data->n = n;
	data->next = NULL;

	if (*head == NULL)
	{
		*head = data;
		return (data);
	}

	while (dump->next)
		dump = dump->next;

	dump->next = data;
	return (data);
}
