#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to list
 * Return: return void
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
    
    for (; head; head = temp)
    {
        temp = head->next;
        free(head);
    }
}