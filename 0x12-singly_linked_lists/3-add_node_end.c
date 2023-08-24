#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - new singly list addition of nodes
  * @head: existed linked list
  * @str: string
  *
  * Return: 0 (NULL returns if it fails)
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *index, *base;

	if (str != NULL)
	{
		index = malloc(sizeof(list_t));
		if (index == NULL)
			return (NULL);

		index->str = strdup(str);
		index->len = _strlen(str);
		index->next = NULL;

		if (*head == NULL)
		{
			*head  = index;
			return (*head);
		}
		else
		{
			base = *head;
			while (base->next)
				base = base->next;

			base->next = index;
			return (base);
		}
	}

	return (NULL);
}

/**
  * _strlen - singly list length return
  * @s: str to read
  *
  * Return: 0 (return string length)
  */
int _strlen(const char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}

	return (x);
}
