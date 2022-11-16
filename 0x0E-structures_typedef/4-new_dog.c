#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogz;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogz = malloc(sizeof(dog_t));
	if (dogz == NULL)
		return (NULL);
	dogz->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogz->name == NULL)
	{
		free(dogz);
		return (NULL);
	}
	dogz->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogz->owner == NULL)
	{
		free(dogz->name);
		free(dogz);
		return (NULL);
	}
	dogz->name = _strcopy(dogz->name, name);
	dogz->age = age;
	dogz->owner = _strcopy(dogz->owner, owner);
	return (dogz);
}
