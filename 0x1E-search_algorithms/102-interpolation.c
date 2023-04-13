#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *  using the interpolation algo
 * @array: poinetr to first elements of array
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index of value else -1
 * Description:
 *  - Probe position: 
 *  pos = lo + (((hi - lo) / (arr[hi] - arr[lo])) * (value - arr[lo]))
 *  - Derivation: https://www.geeksforgeeks.org/interpolation-search/
*/
int interpolation_search(int *array, size_t size, int value)
{
    int hi, lo;
    size_t pos = 0;

    if (array)
    {
        for (lo = 0, hi = (size - 1);
             lo <= hi && value >= array[lo] && value <= array[hi];)
        {
            pos = lo +
                  (((double)(hi - lo) / (array[hi] - array[lo]))
                  * (value - array[lo]));

            printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

            if (array[pos] == value)
                return ((int)pos);
            else if (array[pos] < value)
                lo = pos + 1;
            else if (array[pos] > value)
                hi = pos - 1;
        }
        printf("Value checked array[%lu] is out of range\n", pos);
    }
    return (-1);
}