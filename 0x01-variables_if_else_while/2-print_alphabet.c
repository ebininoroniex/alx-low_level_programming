#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -  program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
	putchar(tolower(x));
return (0);
}
