#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash delete
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *node, *temp;
    unsigned long int idx;
    
    for (idx = 0; idx < ht->size; idx++)
    {
        node = ht->array[idx];
        if (node)
        {
            while(node)
            {
                temp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = temp;
            }
        }
    }
    free(ht->array);
    free(ht);
}