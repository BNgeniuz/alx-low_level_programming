#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 *
 * @head: ptr first input
 *
 * Return: 0 (calc. sum)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *dump = head;

	while (dump)
	{
		sum += dump->n;
		dump = dump->next;
	}

	return (sum);
}
