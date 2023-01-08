#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: returns void
*/
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int idx;
    bool flag = false;

    printf("{");
    for (idx = 0; idx < ht->size; idx++)
    {
        node = ht->array[idx];

        while(node)
        {    
            if (flag)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            flag = true;
            node = node->next;
        }
    }
    printf("}\n");
}