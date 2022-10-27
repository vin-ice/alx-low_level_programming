#include "lists.h"
/**
 * listint_len - returns len of elements in a linked list
 * @h: pointer to a node in a  list
 * 
 * Return: returns len of list
 */
size_t listint_len(const listint_t *h)
{
    unsigned int len = 0;
    
    for (; h; len++, h = h->next)
        ;
    return (len);
}