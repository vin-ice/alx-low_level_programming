#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting value to put in mem
 * @max: ending value to put in mem
 *
 * Return: returns pointer to new array
 */
int *array_range(int min, int max)
{
	int *p_arr, size = (max - min) + 1, i = 0;

	if (min > max)
		return (NULL);
	p_arr = malloc(sizeof min * size);
	if (p_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p_arr + i) = min++;
       return (p_arr);	
}
