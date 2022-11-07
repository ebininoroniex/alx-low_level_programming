#include "main.h"

/**
 * _strlen - Function that returns string length
 * @s: a string integer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
