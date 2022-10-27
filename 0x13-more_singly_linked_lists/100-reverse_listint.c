#include "lists.h"
/**
 * reverse_listint - reverses a linked lisr
 * @head: pointer to head of list
 * 
 * Return: returns a linled list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *next, *prev;
    
    if (*head == NULL || head == NULL)
        return (NULL);
    if ((*head)->next == NULL)
        return (*head);
    prev = NULL;
    while (*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }
    *head = prev;
    return (*head); 
}