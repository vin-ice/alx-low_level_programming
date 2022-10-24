#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: Linked list
 * 
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
    unsigned len = 0;

    for(; h; len++)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    } 
    return (len);
}
