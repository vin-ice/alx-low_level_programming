#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodea at index
 * @head: points to pointer to list
 * @index: index to pop node
 * 
 * Return: 1 on success and -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *node, *left;
    unsigned int pos;

    if (*head == NULL)
        return (-1);
    if (index == 0)
    {
        node = (*head)->next;
        free(*head);
        *head = node;
        return (1);
    }
    node = *head;
    left = *head;
    for (pos = 0; pos < index; pos++, left = node, node = node->next)
    {
        if (node)
            ;
        else
            return (-1);
    }
    left->next = node->next;
    free(node);
    return (1);
}