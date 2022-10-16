#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -  program that prints the alphabet in lowercase,
 * except e and q
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' && alpha` o!= 'q')
	putchar(alpha);
	}
putchar('\n');
return (0);
}
