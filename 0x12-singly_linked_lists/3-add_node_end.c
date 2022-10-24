#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the list
 * @str: string value of string
 * 
 * Return: returns a new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *cursor = *head;

    if(str == NULL)
        return (NULL);
    new_node = malloc(sizeof (list_t));
    if (new_node == NULL)
        return (NULL);
    new_node->str = strdup(str);
    new_node->len = _strlen(str);
    new_node->next = NULL;
    if (*head == NULL) /*points to a null address, first node*/
    {
        *head = new_node;
        return (*head);  
    }
    else /* list has values*/
    {
        while (cursor->next)
            cursor = cursor->next;
        cursor->next = new_node;
    } 
    return (*head);
}

/**
 * _strlen - returns counts of characters in a  str
 * @s: string
 * 
 * Return: returns count
 */
int _strlen(const char *s)
{
    int count = 0;

    for (count = 1; s[count]; count++)
        ;
    return (count);
}