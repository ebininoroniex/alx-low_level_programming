#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index- function that searches for an integer
 *@array: array
 *@size: the number of elements in the array
 *@cmp: pointer to the function used to compare values
 *Return: If no element matches, return -1 If size <= 0, return -1.
 ****/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
