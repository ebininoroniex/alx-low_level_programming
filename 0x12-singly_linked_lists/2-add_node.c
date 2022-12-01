#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	char *addNode;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	addNode = strdup(str);
	if (addNode == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = addNode;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
