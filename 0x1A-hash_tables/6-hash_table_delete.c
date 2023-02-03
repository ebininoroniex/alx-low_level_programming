#include "hash_tables.h"

/**
 * main - function that deletes a hash table
 * @ht: is the hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	long unsigned int i;
    if (ht == NULL) 
    {
        return;
    }
	for (i = 0; i < ht->size; i++) 
    {
        hash_node_t *curr = ht->array[i];
        while (curr != NULL) 
        {
            hash_node_t *next = curr->next;
            free(curr->key);
            free(curr->value);
            free(curr);
            curr = next;
        }
    }
    free(ht->array);
    free(ht);
}
