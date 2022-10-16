#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - This program will assign a random number to
*the variable n each time it is executed
*
* Return: Always 0.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("is positive");
	if (n == 0)
	{
		printf("is zero");
	}
	else
		printf("is negative")
	}
}
return (0);
}
