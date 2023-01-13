#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: head of the linked list
  * @index: index of the node, starting from 0
  *
  * Return: pointer to the node, or NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; node && i < index; i++)
		node = node->next;
	if (i != index)
		return (NULL);
	return (node);
}
