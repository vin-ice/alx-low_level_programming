#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: returns pointer to a hash_table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int i;

    if (!size)
        return (NULL);

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);
    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_node_t) * hash_table->size);
    if (hash_table->array == NULL)
        return (NULL);
    
    for (i = 0; i < hash_table->size; i++)
        hash_table->array[i] = NULL;

    return (hash_table);
}