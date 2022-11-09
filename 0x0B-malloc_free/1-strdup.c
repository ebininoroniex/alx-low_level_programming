#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - creates and allocates space for a new string that is a duplicate
 * of the string pointed to by str
 *
 * @str: string to duplicate
 *
 * Return: Pointer to the new string
 */
char *_strdup(char *str)
{
	unsigned int counter, len;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (counter = 0; counter < len; counter++)
		copy[counter] = str[counter];
	copy[counter] = '\0';
	return (copy);
}
