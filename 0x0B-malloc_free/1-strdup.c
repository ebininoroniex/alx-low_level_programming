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
	char *dupString;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	dupString = malloc(sizeof(char) * (len + 1));
	if (dupString == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		dupString[index] = str[index];
	dupString[len] = '\0';
	return (dupString);
}
