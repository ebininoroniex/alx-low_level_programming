#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *str_concat - check the code
 *@s1: character string 1
 *@s2: character string 2
 *Return: an empty string else null on failure
 ************/
char *str_concat(char *s1, char *s2)
{
	char *concatenate_str;
	int i, concatenate_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concatenate_str = malloc(sizeof(char) * len);
	if (concatenate_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concatenate_str[concatenate_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		concatenate_str[concatenate_i++] = s2[i];
	return (concatenate_str);
}
