#include <stdlib.h>
#include "lists.h"

/**
  * free_list - singly free link list.
  * @head: input first pointer of linked list
  *
  * Return: 0 (nothing is free)
  */
void free_list(list_t *head)
{
	list_t *base;

	while (head)
	{
		base = head;
		head = head->next;
		free(base->str);
		free(base);
	}

	free(head);
}
