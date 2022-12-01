#include "lists.h"
#include <stdio.h>
/**
 * list_len- function that returns the No: of elements in a list
 *@h: head of linked list
 *Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
