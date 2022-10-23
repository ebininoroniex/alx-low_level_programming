#include "main.h"

/**
 * main - check the code
 *
 *Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 'Z'&& c >= 'A')
		return (1);
	else 
		return (0);
}
