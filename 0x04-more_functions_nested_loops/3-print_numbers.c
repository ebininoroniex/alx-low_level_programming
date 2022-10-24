#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Check description
 * Description: It prints 0-9, followed by a new line.
 * Return: 0.
 */

void print_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
