#include "lists.h"
/**
 * pop_listint - deletes head and returns its value
 * @head: pointer to start of a list
 * 
 * Return: returns value of head
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (*head == NULL)
        return (0);
    else
    {
        temp = *head;
        *head = temp->next;
        n = temp->n;
        free (temp);
    }
    return (n);
}