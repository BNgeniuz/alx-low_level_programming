#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: ptr to first input
 *
 * Return: 0 (looping)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *speed = head;
	listint_t *brake = head;

	if (!head)
		return (NULL);

	while (brake && speed && speed->next)
	{
		speed = speed->next->next;
		brake = brake->next;
		if (speed == brake)
		{
			brake = head;
			while (brake != speed)
			{
				brake = brake->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}
