#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * @head: A pointer to the address of the list.
 * @idx: The index of the list
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current != NULL)
	{
		if (count == (idx - 1))
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	free(new);
	return (NULL);
}
