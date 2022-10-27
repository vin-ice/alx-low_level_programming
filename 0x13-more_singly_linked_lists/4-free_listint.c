#include "lists.h"
/**
 * free_listint - frees list of listint_t
 * @head: starting point of list
 * 
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *left;

    for (; head->next;)
    {
        left = head;
        head = head->next;
        free(left);
    }
    free(head);
}