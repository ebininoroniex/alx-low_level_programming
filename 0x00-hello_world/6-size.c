/*
 * Filename: 5-printf.c
 * C program to print -with proper grammar, but the outcome is a piece of art
 * Author: Ebinino
 *
 * Size of a char: 1 byte
 * Size of an int: 4 bytes
 * Size of a long int: 8 bytes
 * Size of a long long int: 8 bytes
 * Size of a float: 4 bytes
 * Size of a double: 8 bytes
 * Size of a long double: 16 bytes
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Size of a char: %d byte\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	printf("Size of a double: %d bytes\n", sizeof(double));
	printf("Size of a long double: %d bytes\n", sizeof(long double));
	return (0);
}
