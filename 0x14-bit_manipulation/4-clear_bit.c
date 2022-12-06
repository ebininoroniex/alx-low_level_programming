#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit an index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index) 
{
	unsigned long int mask = 1 << index;
	*n &= ~mask;

	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}
	return (1);
}
