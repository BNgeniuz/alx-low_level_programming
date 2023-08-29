#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _r - malloc for array ptr
 * @size: new linked list
 * @list: list ptr
 * @new: node to be added
 *
 * Return: 0 (looped)
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newline;
	size_t data;

	newline = malloc(size * sizeof(listint_t *));
	if (newline == NULL)
	{
		free(list);
		exit(98);
	}
	for (data = 0; data < size - 1; data++)
		newline[data] = list[data];
	newline[data] = new;
	free(list);
	return (newline);
}


/**
 * print_listint_safe - safely prints all listint links
 * @head: ptr to first input
 *
 * Return: 0 (num of nodes)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t data, idx = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (data = 0; data < idx; data++)
		{
			if (head == list[data])
			{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(list);
			return (idx);
			}
		}
		idx++;
		list = _r(list, idx, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (data);
}
