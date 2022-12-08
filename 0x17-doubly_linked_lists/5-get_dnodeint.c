#include "lists.h"
#include <string.h>
/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to list
 * @index: index to retrive
 * 
 * Return: nth node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;

	for (; head; head = head->next, count++)
        if (count == index)
            return (head);
    return (NULL);
}