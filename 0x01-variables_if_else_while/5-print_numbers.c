#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program that prints all single digit numbers of base 10 starting
 * from 0, followed by a new line
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
	printf("%i\n", i);
return (0);
}
