#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of the list.
 * @head: A pointer to the address of the head of the list.
 * @index: The index of the node to be deleted
 * Return: On success 1   on fail  -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;
	free(temp);
	return (1);
}
