#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function to counts the number
 * of unique nodes in a looped listint_t linked list.
 * @head: ptr to first input
 *
 * Return: 0 (looped)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t data = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				data++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				data++;
				slow = slow->next;
			}

			return (data);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints singly linked list safely.
 * @head: ptr to first input
 *
 * Return: 0 (nodes in the list)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t data, idx = 0;

	data = looped_listint_len(head);

	if (data == 0)
	{
		for (; head != NULL; data++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < data; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (data);
}
