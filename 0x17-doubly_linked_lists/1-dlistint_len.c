#include "lists.h"
/**
 * dlisntint_len - returns the number of elements in a linked list
 * @h: pointer to header
 * Return: returns size of lineked list
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    if (h->prev)
        for (; h->prev; h = h->prev)
            ;
    for (count = 0; h; h = h->next, count++)
        ;
    return (count);
}