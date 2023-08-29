#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @n: num of node list
 * @idx: index at the begining of node
 * @head: ptr first input
 *
 * Return: 0 (insertion)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *dump = *head;
	listint_t *data;

	unsigned int l;

	data = malloc(sizeof(listint_t));

	if (!data || !head)
		return (NULL);

	data->n = n;
	data->next = NULL;

	if (idx == 0)
	{
		data->next = *head;
		*head = data;
		return (data);
	}
	for (l = 0; dump && l < idx; l++)
	{
		if (l == idx - 1)
		{
			data->next = dump->next;
			dump->next = data;
			return (data);
		}
		else
			dump = dump->next;
	}

	return (NULL);
}
