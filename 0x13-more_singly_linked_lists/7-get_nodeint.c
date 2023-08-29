#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list
 *
 * @index: node return input
 *
 * @head: ptr first input
 *
 * Return: 0 (to the nth node)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *dump = head;

	unsigned int l = 0;

	while (dump && l < index)
	{
		dump = dump->next;
		l++;
	}

	return (dump ? dump : NULL);
}
