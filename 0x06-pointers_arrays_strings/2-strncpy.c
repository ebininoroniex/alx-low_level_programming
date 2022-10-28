#include "main.h"
#include <stdio.h>

/**
 **_strncpy - copy a string
 * @dest: destination string
 * @src: source string  * @n: amount of characters to copy
 * @n: integer
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
