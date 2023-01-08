#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 *  data structure
 * @size: size of array
 * Return: if error NULL else pointer to new hashed table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *hash_table;
    unsigned int long i;
    
    hash_table = malloc(sizeof(shash_table_t));
    if (hash_table == NULL)
        return (NULL);
    
    hash_table->size = size;
    hash_table->array = malloc(sizeof(shash_node_t) * hash_table->size);
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return (NULL);
    }
    for (i = 0; i < hash_table->size; i++)
        hash_table->array[i] = NULL;
    hash_table->shead = NULL;
    hash_table->stail = NULL;

    return (hash_table);
}

/**
 * shash_table_set - adds a unique element to sorted hash table
 * @ht: sorted harsh table
 * @key: key
 * @value: value
 * Return: 1 on success else 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *node, *temp;
    unsigned long int idx;

    if (!key || strlen(key) == 0)
        return (0);
    idx = key_index((const unsigned char *) key, ht->size);
    temp = ht->shead;
    while(temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            return (1);
        }
        temp = temp->snext;
    }
    node = malloc(sizeof(shash_node_t));
    if (node == NULL)
        return (0);
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (0);
    }
    node->next = ht->array[idx];
    ht->array[idx] = node;

    if (ht->shead == NULL)
    {
        node->sprev = NULL;
        node->snext = NULL;
        ht->shead = node;
        ht->stail = node;
    }
    else if (strcmp(ht->shead->key, key) > 0)
    {
        node->sprev = NULL;
        node->snext = ht->shead;
        ht->shead->sprev = node;
        ht->shead = node;
    }
    else
    {
        temp = ht->shead;
        while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
          temp = temp->snext;
        node->sprev = temp;
        node->snext = temp->snext;
        if (temp->snext == NULL)
            ht->stail = node;
        else
            temp->snext = node;
        temp->snext = node;
    }
    return (1);
}

/**
 * shash_table_get - Retrieve value associated with
 * a key in a sorted hash table
 * @ht: pointer to sorted harshed table
 * @key: key to get value of
 * 
 * Return: NULL if key not present else
 * value 
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long idx;

    if (ht == NULL || key == NULL)
        return (NULL);
    idx = key_index((const unsigned char *)key, ht->size);
    if (idx >= ht->size)
        return (NULL);
    node = ht->shead;
    while (node != NULL && strcmp(node->key, key) != 0)
        node = node->snext;
    return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hashed table
 * @ht: Pointer to sorted harshed table
*/
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;
    node = ht->shead;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hashs table in
 * reverse order
 * @ht: pointer to sorted hash table to print
*/
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;
    node = ht->stail;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node != NULL)
            printf(", "); 
    }
    printf("}\n");
    
}

/**
 * shash_table_delete - deletes a sorted harsh table
 * @ht: pointer to sorted hash table
*/
void shash_table_delete(shash_table_t *ht)
{
    shash_table_t *head = ht;
    shash_node_t *node, *tmp;

    if (ht == NULL)
        return;
    node = ht->shead;
    while (node)
    {
        tmp = node->snext;
        free(node->key);
        free(node->value);
        free(node);
        node = tmp;
    }
    free(head->array);
    free(head);
}