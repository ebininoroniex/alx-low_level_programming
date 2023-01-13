#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main- main function
*@argc: argument count
*@argv: argument value
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char key[9];
	int i;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	for (i = 0; i < 8; i++)
	{
		key[i] = argv[1][i % strlen(argv[1])] + i;
	}
	key[8] = '\0';
	printf("%s\n", key);

	return (0);
}
