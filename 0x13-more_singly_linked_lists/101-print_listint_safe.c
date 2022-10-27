#include "lists.h"
/**
 * _r - reallocates memory for any array of pointers
 * to th enodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to the list
 * 
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
    const listint_t **newlist;
    size_t i;

    newlist = malloc(size * sizeof(listint_t));
    if (newlist == NULL)
    {
        free(list);
        exit(98);
    }
    for (i = 0; i < size - 1; i++)
        newlist[i] = list[i];
    newlist[i] = new;
    free(list);
    return (newlist);
}

/**
 * print_listint_safe - prints a linked li st
 * @head: points to list 
 * 
 * Return: returns number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    unsigned int len = 0, i;
    const listint_t **list = NULL;

    while (head != NULL)
    {
        for (i = 0; i < len; i++)
        {
            if (head == list[i])
            {
                printf("-> [%p] %d\n", (void *) head, head->n);
                free(list);
                return (len);
            }
        }
        len++;
        list = _r(list, len, head);
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
    }
    free(list);
    return (len);
}