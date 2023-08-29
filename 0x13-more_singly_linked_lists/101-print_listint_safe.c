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
	size_t idx;

	newline = malloc(size * sizeof(listint_t *));
	if (newline == NULL)
	{
		free(list);
		exit(98);
	}
	for (idx = 0; idx < size - 1; idx++)
		newline[idx] = list[idx];
	newline[idx] = new;
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
	size_t new, idx = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (new = 0; new < idx; new++)
		{
			if (head == list[new])
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
	return (new);
}
