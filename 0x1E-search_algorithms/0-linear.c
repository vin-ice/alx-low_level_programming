#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of int
 *  using Linear Search algo
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search
 * 
 * Return returns first index else -1
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}