#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - new node at a given position
 *
 * @h: head list input
 * @idx: new node index
 * @n: num of new node
 * Return: 0 (success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh;
	dlistint_t *master;
	unsigned int l;

	fresh = NULL;
	if (idx == 0)
		fresh = add_dnodeint(h, n);
	else
	{
		master = *h;
		l = 1;
		if (master != NULL)
			while (master->prev != NULL)
				master = master->prev;
		while (master != NULL)
		{
			if (l == idx)
			{
				if (master->next == NULL)
					fresh = add_dnodeint_end(h, n);
				else
				{
					fresh = malloc(sizeof(dlistint_t));
					if (fresh != NULL)
					{
						fresh->n = n;
						fresh->next = master->next;
						fresh->prev = master;
						master->next->prev = fresh;
						master->next = fresh;
					}
				}
				break;
			}
			master = master->next;
			l++;
		}
	}

	return (fresh);
}
