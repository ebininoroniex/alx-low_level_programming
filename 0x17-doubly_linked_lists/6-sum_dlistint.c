#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data of a dlistint_t
 * linked list.
 * @head: pointer to head of linked list
 *
 * Return: sum of all data, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
