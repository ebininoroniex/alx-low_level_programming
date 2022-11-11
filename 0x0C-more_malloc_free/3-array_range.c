#include "main.h"
#include <stdlib.h>

/**
 *array_range- function that creates an array of integers
 *@min: minimum array location
 *@max: maximum array location
 *Return: the pointer to the newly created array
 **/
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
	{
		return (NULL);
	}
	range = malloc(((max - min) + 1) * sizeof(int));
	if (!range)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		range[i] = min + i;
	}
	return (range);
}
