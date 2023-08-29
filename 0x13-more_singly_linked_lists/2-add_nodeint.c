#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 *
 * @head: ptr input to the first node list
 *
 * @n: nodes to be added at th beginning
 *
 * Return: 0 (nodes at beginning)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *data;

	data = malloc(sizeof(listint_t));

	if (!data)
		return (NULL); /** malloc failed **/

	data->n = n;
	data->next = *head;

	*head = data;

	return (data);
}
