#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - length of singly list
  * @h: singly linkedlist
  *
  * Return: 0 (node of length)
  */
size_t list_len(const list_t *h)
{
	size_t read = 0;

	while (h)
	{
		h = h->next;
		read++;
	}

	return (read);
}
