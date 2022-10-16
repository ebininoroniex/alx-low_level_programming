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
for (hexa = 0; hexa < 16; hexa++)
	putchar((hexa % 16), 0);
putchar("\n");
return (0);
}
