#include "main.h"
#include <stdio.h>
/**
 *_strncat - Concatenates two strings
 * @dest: string
 * @src: string
 * @n: bytes of the string source
 * Return: the resulting string des
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i++])
		d++;
	for (i = 0; src[i] && i < n; i++)
		dest[d++] = src[i];
	return (dest);
}
