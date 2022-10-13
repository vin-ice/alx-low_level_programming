#include <stddef.h>
/**
 * int_index - seaarches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: returns index of first element 
 * 	for which cmp does not return 0
 * 	else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
