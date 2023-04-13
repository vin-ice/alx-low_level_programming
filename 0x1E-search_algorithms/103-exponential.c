#include "search_algos.h"

/**
 * srch_dis_arr - Prints array
 * @arr: Array to check
 * @start: Starting index
 * @end: Final index
*/
void srch_dis_arr(int *arr, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (; start <= end; start++)
    {
        printf("%d", arr[start]);
        if (start != end)
            printf(", ");
    }
    printf("\n");
}

/**
 * _bin_search - Binary search
 * @arr: Pointer to first index of array
 * @start: Starting position
 * @end: End of array
 * @val: Value being searched for
 * 
 * Return: index of val else -1
*/
int _bin_search(int *arr, size_t size, int val)
{
    size_t mid, start;

    if (arr)
    {
        for (start = 0; start <= size;)
        {
            srch_dis_arr(arr, start, size);
            mid = start + (size - start) / 2;
            if (arr[mid] < val)
                start = mid + 1;
            else if (arr[mid] > val)
                size = mid - 1;
            else if (arr[mid] == val)
                return(mid);
        }
    }
    return (-1);
}

/**
 * exponential_search - searches for a value in a sorted
 *  array using the Exponential search algo
 * @array: Pointer to first element
 * @size: Number of elements in array
 * @value: Value to search
 * 
 * Return: first index of value else -1
 * Description:
 *  https://en.wikipedia.org/wiki/Exponential_search
*/
int exponential_search(int *array, size_t size, int value)
{
    size_t factor;
    int ans;

    if (array)
    {
        for (factor = 1; factor < size && array[factor] <= value; factor *= 2)
            printf("Value checked array[%lu] = [%d]\n", factor, array[factor]);

        printf("Value found between indexes [%lu] and [%lu]\n", (factor / 2), MIN(factor, size - 1));
        ans = _bin_search(&(array[(factor / 2)]), (MIN(factor, size - 1) - (factor / 2)), value);
        return ((ans >= 0) ? ans + (int)(factor / 2) : ans);
    }
    return (-1);
}