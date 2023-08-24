#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints singly list
  * @h: singly linked list
  *
  * Return: 0 (nodes)
  */
size_t print_list(const list_t *h)
{
	size_t read = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		read++;
	}

	return (read);
}
