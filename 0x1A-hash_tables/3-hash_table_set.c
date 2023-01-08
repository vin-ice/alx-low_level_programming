#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key value of node
 * @value: value of node
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = 0;
    hash_node_t *node, *tmp;

    if (!key || strlen(key) == 0 || *key == '\0' || value == NULL)
        return (0);

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    node->key = strdup(key);
    node->value = strdup(value);
    index = key_index((const unsigned char *) key, ht->size);
    if (ht->array[index])/**collision prevention*/
    {
        for (tmp = ht->array[index]; tmp; tmp = tmp->next)
        {
            if (strcmp(tmp->key, node->key) == 0)/**duplicate*/
            {    
                free(node->key);
                free(tmp->value);
                tmp->value = strdup(node->value);
                free(node->value);
                free(node);
                return (1);
            }
        }
        node->next = ht->array[index];
    }
    else
        node->next = NULL;
    ht->array[index] = node;
    return (1);
}