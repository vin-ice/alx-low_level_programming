#include "search_algos.h"

/**
 * srch_dis_check - Prints the value checked at a
 *  specified index
 * @i: index checked
 * @val: Value found
*/
void srch_dis_check(size_t i, int val)
{
    printf("Value checked array[%d] = [%d]\n", (int) i, val);
}

/**
 * srch_dis_find - Prints the val found
 * @i: index found
 * @val: value found
*/
void srch_dis_find(size_t i, int val)
{
    printf("Found %d at index: %d\n", val, (int) i);
}