#include "hash_tables.h"
/**
 * hash_table_get - unction that retrieves a value associated with a key.
 * @ht : the hash table you want to look into
 * @key is the key you are looking for
 * Return: he value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned int index;
    hash_node_t *element;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);
    element = ht->array[index];

    while (element != NULL)
    {
        if (strcmp(element->key, key) == 0)
            return (element->value);
        element = element->next;
    }
    return (NULL);
}
