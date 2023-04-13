#include "search_algos.h"
/***
 * linear_skip - searches for a value in a sorted skip list
 * @list: pointer to head of skip list to search in
 * @value: value to search
 * 
 * Return: pointer to first node else NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *curr;

    if (list)
    {
        for (prev = curr = list; curr->next != NULL && curr->n < value;)
        {
            prev = curr;
            if (curr->express != NULL)
            {
                curr = curr->express;
                printf("Value checked at index [%lu] = [%d]\n",
                       curr->index, curr->n);
            }
            else
            {
                while (curr->next != NULL)
                    curr = curr->next;
            }
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