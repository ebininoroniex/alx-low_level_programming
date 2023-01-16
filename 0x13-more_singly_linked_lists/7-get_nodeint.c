#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *          a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}