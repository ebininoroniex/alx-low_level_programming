#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 *
 *@src: string input
 *@dest: string input
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
