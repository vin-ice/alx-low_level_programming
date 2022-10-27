#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: points to a list
 * @index: desired index whose node is to be returned
 * 
 * Return: returns node/pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *n = head;
    unsigned int count = 0;

    for (; count < index; count++)
    {
        if (n == NULL)
            return (NULL);
        n = n->next;
    }
    return (n);
}