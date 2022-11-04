#include "main.h"
#include <stdlib.h>

/**
 *factorial -  A function that returns the factorial of a given number
 *@n: integer
 *
 * Return: -1 or 1 or (n * factorial(n - 1))
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
