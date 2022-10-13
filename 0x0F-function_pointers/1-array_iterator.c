#include <stddef.h>
/*
 * array_iterator - executes a function on each  element of an arrayt
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function to execute
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (action == NULL || array == NULL)
		exit (1);
	for (i = 0; i < size; i++)
	{	
		(*action)(array[i]);
	}
}
