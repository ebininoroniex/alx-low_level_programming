#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 *Return: Always 0.
 */

int _isupper(int c)
{
	int c;

	c = 'A';
	if (isupper(c))
		printf("%c: 1",c);
	else
		printf("%c: 0",c);

	c = 'a';
	if (isupper(c))
		printf("%c: 1",c);
	else
	printf("%c: 0",c);
}
