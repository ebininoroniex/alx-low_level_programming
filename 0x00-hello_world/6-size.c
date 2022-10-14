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
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a double: %d byte(s)\n", sizeof(double));
	printf("Size of a long double: %d byte(s)\n", sizeof(long double));
	return (0);
}
