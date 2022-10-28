#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * rev_array: reverse content of array
 * main : Main function
 *@a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
