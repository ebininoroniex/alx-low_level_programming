#include "main.h"
#include <stdlib.h>
/**
 *_calloc- function that allocates memory for an array, using malloc
 *
 *@nmemb: string
 *@size: size of string
 *Return:  returns a pointer to the allocated memory else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
