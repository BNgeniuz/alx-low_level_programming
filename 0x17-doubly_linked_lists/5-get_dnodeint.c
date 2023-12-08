#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list returns
 * @head: ptr to input
 * @index: node index starting from 0
 * Return: 0 (success)
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int value;
	dlistint_t *current;

	value = 0;
	if (head == NULL)
	return (NULL);

	current = head;
	while (current)
	{
	if (index == value)
	return (current);
	value++;
	current = current->next;
	}
	return (NULL);
}
