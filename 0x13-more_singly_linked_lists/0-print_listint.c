#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: points to header
 * 
 * Return: returns the number of node
 */
size_t print_listint(const listint_t *h)
{
    unsigned int len = 0;
    
    for (; h; len++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return (len);
}