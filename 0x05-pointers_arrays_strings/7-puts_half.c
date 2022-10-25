#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string input
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (; j < i; j++)
		printf("%c", str[j]);
	printf("\n");
}
