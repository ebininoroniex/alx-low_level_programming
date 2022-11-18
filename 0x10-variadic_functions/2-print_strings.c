#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *string;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
		return;
	for (count = 0; count < n; count++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (count < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
