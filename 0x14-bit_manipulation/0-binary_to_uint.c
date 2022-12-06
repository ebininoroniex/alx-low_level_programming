#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: A pointer to a string of 0 and 1
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int base = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			value += (b[i] - '0') * base;
			base *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
