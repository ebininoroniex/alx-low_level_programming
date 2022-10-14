/*
 * Filename: 6-size.c
 * C program to print various sizes of datatypes
 * compiled and run on computers
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
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %dbyte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
