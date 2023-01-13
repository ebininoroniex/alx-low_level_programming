#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: double pointer to head of list
 * @idx: index of list to insert at
 * @n: data for new node
 *
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; tmp != NULL; i++)
	{
		if (i == (idx - 1))
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
