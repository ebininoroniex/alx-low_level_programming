#include "hash_tables.h"
/*
 * hash_table_set - Function to add an element to the hash table.
 *
 * @param ht: Pointer to a hash table
 * @param key: The key for the element
 * @param value: The value for the element
 *
 * @return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
