#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: A pointer to the head of the listint_t list to be freed
 *Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);

	return (n);
}
