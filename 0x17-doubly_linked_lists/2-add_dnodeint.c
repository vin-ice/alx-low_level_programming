#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: pointer to pointer to list
 * @n: size of list
 * 
 * Return: address to new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;
    
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    if (*head != NULL)
		(*head)->prev = new;
    new->next = *head;
    *head = new;
    return (new);
}