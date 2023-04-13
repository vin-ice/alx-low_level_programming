#include "search_algos.h"

/**
 * srch_dis_check - Prints checked substring
 * @arr: Array to check
 * @start: Starting index
 * @end: Final index
*/
void srch_dis_check(int *arr, int start, int end)
{
    printf("Searching in array: ");
    for (; start <= end; start++)
    {
        printf("%d", arr[start]);
        if(start != end)
            printf(", ");
    }
    printf("\n");
}
/**
 * binary_search - Searches a value in a sorted array using
 *  Binary search algos
 * @array: Array
 * @size: number of elements
 * @value: Value being searched
 * Return: index at which value is found alse -1
*/
int binary_search(int *array, size_t size, int value)
{
    int mid, l, r;

    if (array)
    {
        l = 0;
        r = size - 1;
        while (l <= r)
        {
            srch_dis_check(array, l, r);
            mid = l + (r - l) / 2;
            if (array[mid] < value)
                l = mid + 1;
            else if (array[mid] > value)
                r = mid - 1;
            else if (array[mid] == value)
                return(mid);
        }
    }
    return (-1);
}