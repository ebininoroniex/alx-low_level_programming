#include  "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - print n number of elements in an array
 * @a: array of integers to print
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
