#include "search_algos.h"
/**
 * jump_search - searches for value in a sorted
 *  array of integers
 * @array: Pointer to first element
 * @size: Number of elements
 * @value: Value too find
 * 
 * Return: first index of value else -1
*/
int jump_search(int *array, size_t size, int value)
{
    size_t lower, upper;
    int step;

    if (array)
    {
        step = (int)sqrt(size);

        for (lower = upper = 0; upper < size && array[upper] < value;)
        {
            printf("Value checked array[%lu] = [%d]\n", upper, array[upper]);
            lower = upper;
            upper += step;
        }
            printf("Value found between indexes [%lu] and [%lu]\n", lower, upper);
        for (; array[lower] < value;)
        {
            printf("Value checked array[%lu] = [%d]\n", lower, array[lower]);
            lower += 1;
            if (lower == MIN((upper + 1), size))
                return (-1);
        }
        if (array[lower] == value)
        {
            printf("Value checked array[%lu] = [%d]\n", lower, array[lower]);
            return ((int)lower);
        }
    }
    return (-1);
}