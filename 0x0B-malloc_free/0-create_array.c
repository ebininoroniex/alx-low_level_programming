#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - check code
 *
 *@size: unsigned integer array
 *@c: character to be initialised
 * Return: NULL if size = 0 Returns
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (0);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
