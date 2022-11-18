#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  * sum_them_all- function that returns the sum of all its parameters
  *@n: integer
  *Return: Sum of all its parameters else if n= 0 return 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
