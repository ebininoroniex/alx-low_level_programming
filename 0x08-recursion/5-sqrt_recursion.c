#include "main.h"
#include <stdlib.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: an integer
 *
 * Return: -1 or n or _sqrt_recursion(n/2)
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n / 2));
}
