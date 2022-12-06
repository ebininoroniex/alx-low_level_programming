#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to get from
 * one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
