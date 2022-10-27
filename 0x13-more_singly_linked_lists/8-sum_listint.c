#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) of a linked list
 * @head: points to list/ first node
 * 
 * Return: sum
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *node;

    if (head == NULL)
        return (sum);
    node = head;
    for (; node; node = node->next)
        sum += node->n;
    return (sum);
}