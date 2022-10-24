#include "lists.h"
/**
 * list_t -adds new node at the beginning of a list
 * @head: pointer to pointer to head of list
 * @str: pointer to string to add
 * 
 * Return: new formed list
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (str == NULL)
        return (NULL);
    new_node = malloc(sizeof(list_t));
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
    new_node->next = *head; /*points to a an address of a struct*/
    *head = new_node;    
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