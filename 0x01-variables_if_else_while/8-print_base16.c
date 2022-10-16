#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program that prints all single digit numbers of base 16 starting
 * from 0, followed by a new line
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int hexa;
char alpha;

for (hexa = 0; hexa < 10; hexa++)
	putchar((hexa % 10) + '0');
for (alpha = 'a'; alpha <= 'f'; alpha++)
	putchar(alpha);
putchar("\n");
return (0);
}
