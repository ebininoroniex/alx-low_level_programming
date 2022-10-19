#include "main.h"
/**
 * print_alphabet - Check the description
 * Description: Prints the alphabet in lowercase followed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
