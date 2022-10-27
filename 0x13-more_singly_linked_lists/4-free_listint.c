#include "lists.h"

/**
 * free_listint - frees list of listint_t
 * @head: starting point of list
 * 
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
