#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 *@size:  is the size of the array
 * Return: pointer to the newly created hash table else null.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(int) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	return (new_table);
}
