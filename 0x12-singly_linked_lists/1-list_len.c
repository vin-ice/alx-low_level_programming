#include "lists.h"
/**
 * list_len: returns number of elements in a linked list
 * @h: pointer to list
 * 
 * Return: returns length
 */
size_t list_len(const list_t *h)
{
    unsigned int len = 0;
    for (; h; len++)
        h = h->next;
    return (len);
}