#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of list
 * @idx: index to insert node
 * @n: data to put in node
 * 
 * Return: returns address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *node, *ele;
    unsigned int pos = 0;
    
    if (*head == NULL)
        return NULL;
    ele = *head;
    for (; pos < idx; pos++, ele = ele->next)
    {
        if (!ele)
            return (NULL);
    }
    node = malloc(sizeof (listint_t));
    if (node == NULL)
        return (NULL);
    node->n = n;
    if (ele->next)
        node->next = ele->next;
    else
        node->next = NULL;
    ele->next = node;
    return (node);
}