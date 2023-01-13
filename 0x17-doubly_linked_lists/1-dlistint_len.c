#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
*dlistint_len- function that shows no of elements in a list.
*
*@h: pointer to the list
*Return: No of elements in list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
