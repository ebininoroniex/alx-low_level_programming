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
	char *result = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (strdup(s2));
	if (s2 == NULL)
		return (strdup(s1));
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
