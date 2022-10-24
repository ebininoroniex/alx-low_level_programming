#include "main.h"
#include <unistd.h>

/**
  * more_numbers - check description
  * Description : Prints 0-14 ten times
  * Return: Always 0.
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <	15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
