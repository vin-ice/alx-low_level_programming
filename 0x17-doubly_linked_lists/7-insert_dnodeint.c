#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index to insert
 * @n: value in node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
/**
 * dlisntint_len - returns the number of elements in a linked list
 * @h: pointer to header
 * Return: returns size of lineked list
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    if (h->prev)
        for (; h->prev; h = h->prev)
            ;
    for (count = 0; h; h = h->next, count++)
        ;
    return (count);
}