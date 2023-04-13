#include "search_algos.h"

/**
 * jump_list - searches for a valur in a sorted list of
 *  int using jump search
 * @list: Pointer to head of sorted list
 * @size: number of nodes
 * @value: value to search for
 * 
 * Return: node else NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *curr, *prev;
    size_t step;
    
    if (list)
    {
        step = 0;

        for (prev = curr = list; curr->n < value && curr->index + 1 < size;)
        {
            prev = curr;
            for (step += sqrt(size); curr->index < step; curr = curr->next)
            {
                if (curr->index + 1 == size)
                    break;
            }
            printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
        }

        printf("Value found between indexes [%lu] and [%lu]\n",
               prev->index, curr->index);
        for (; prev->index < curr->index && prev->n < value; prev = prev->next)
            printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        return (prev->n == value ? prev : NULL);
    }
    return (NULL);
}