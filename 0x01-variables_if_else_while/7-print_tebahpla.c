#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -  program that prints the alphabet in lowercase in reverse,
 * followed by a new line
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
char alpha;
for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	putchar(alpha);
putchar('\n');
return (0);
}
