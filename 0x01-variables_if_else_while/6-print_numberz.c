#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program that prints all single digit numbers of base 10 starting
 * from 0, only using putchar and without char variables
 * followed by a new line
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
putchar("\n");
return (0);
}
