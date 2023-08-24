#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - singly list addition of element
  * @head: existed linked list
  * @str: strings
  *
  * Return: 0 (NULL byt)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *base;

	if (head != NULL && str != NULL)
	{
		base = malloc(sizeof(list_t));
		if (base == NULL)
			return (NULL);

		base->str = strdup(str);
		base->len = _strlen(str);
		base->next = *head;

		*head = base;

		return (base);
	}

	return (0);
}

/**
  * _strlen - singly list str length return
  * @s: input str
  *
  * Return: 0 (returns)
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
