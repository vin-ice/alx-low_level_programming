#include "lists.h"
/**
 * add_nodeint_end - add a new node at the node of a list
 * @head: pointer to header
 * @n: integer to enter value of element
 * 
 * Return: returns the address of the new element or void
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node, *cursor = *head;

    node = malloc(sizeof (listint_t));
    if (node == NULL)
        return (NULL);
    else
    {
        node->n = n;
        node->next = NULL;
        if (*head == NULL)/*first node*/
        {
            *head = node;
            return (node);
        }
        else /*not first*/
        {
            while (cursor->next)
                cursor = cursor->next;
            cursor->next = node;
        }
    }
    return (node);
}