#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - dlistint_t list freeing
 * @head: ptr to input
 * Return: 0 (success)
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
