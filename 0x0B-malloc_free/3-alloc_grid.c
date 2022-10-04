#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width
 * @height: height
 * Return: returns pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid_buffer  = (int **) malloc(height * sizeof(int *));
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	while (i < height)
	{
		grid_buffer[i] = (int *) malloc(sizeof(int) * width);
		while (j < width)
		{
			grid_buffer[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid_buffer);
}
