#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program that prints all possible combination of single digits
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int comb;
for (comb = 0; comb < 10; comb++)
	putchar((comb % 10) + '0');
	if (num==9)
		continue;
	putchar(',');
	putchar(' ');
putchar("\n");
return (0);
}
