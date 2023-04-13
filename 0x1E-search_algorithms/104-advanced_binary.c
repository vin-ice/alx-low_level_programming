#include "search_algos.h"
/**
 * srch_dis_arr - Prints checked substring
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
        if(start != end)
            printf(", ");
    }
    printf("\n");
}

/**
 * _bin - Uses recursion to perform a binary search
 * @arr: Pointer to first value of array
 * @l: Points to beginning of subarray
 * @r: Points to end of subarray
 * @val: Value being searched for
 * 
 * @Return: Returns index found else -1
*/
int _bin(int *arr, size_t l, size_t r, int val)
{
    size_t mid;

    if (l <= r)
    {
        srch_dis_arr(arr, l, r);
        mid = l + (r - l) / 2;

        if (arr[mid] == val &&
                    (mid == l || arr[mid - 1] != val))
            return (mid);
        else if (arr[mid] >= val)
            return (_bin(arr, l, mid, val));
        else if (arr[mid] < val)
            return (_bin(arr, mid + 1, r, val));
    }
    return (-1);
}

/**
 * advanced_binary - Searches a value in a sorted array using 
 *  Binary search  algos including the first element
 * @array: Array
 * @size: number of elements
 * @value: Value being searched
 * Return: index at which value is found alse -1
*/
int advanced_binary(int *array, size_t size, int value)
{
    if (array)
    {
        return (_bin(array, 0, size - 1, value));
    }
    return (-1);
}