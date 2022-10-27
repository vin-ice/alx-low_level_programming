#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: points to head of list
 * 
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *next = *head;

    for (; next->next;)
    { 
        current = next;
        next = next->next;
        free (current);
    }
    free(next);
}