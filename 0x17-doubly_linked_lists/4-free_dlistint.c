#include "lists.h"
#include <stdlib.h>
/**
*free_dlistint- main function
*@head: pointer to the list
*return:always 0
***/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
