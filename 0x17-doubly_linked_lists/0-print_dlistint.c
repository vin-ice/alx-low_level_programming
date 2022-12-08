#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to head of list
 * Return: number of hs
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
   
    if (h->prev)
        for (; h->prev; h = h->prev)
            ;
    for (count = 0; h; h = h->next, count++)
        printf("%d\n", h->n);
    return (count);
}