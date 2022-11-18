#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers- function thatthat prints numbers, followed by a new line.
  *@separator:string to be printed between numbers
  *@n: string to be printed between numbers
  *Return: ALways 0.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
