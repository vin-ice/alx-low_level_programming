#include <stddef.h>
/**
 * int_index - seaarches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to compare function
 *
 * Return: first index for which cmp doesn't return 0, or -1
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
