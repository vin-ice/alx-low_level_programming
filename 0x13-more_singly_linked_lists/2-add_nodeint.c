#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the header of the list
 * @n: number value to input in the nodes list
 * 
 * Return: returns address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *node;

    node = malloc(sizeof (listint_t));
    if (node == NULL)
        return (NULL);
    else{
        node->n = n;
        if (*head == NULL) /**first element*/
        { 
            node->next = NULL;
            *head = node;
        }
        else /*not the first node*/
        {
            node->next = *head;
            *head = node;  
        }
        
    }
    return (node);
}