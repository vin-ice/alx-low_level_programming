#include <stdlib.h>
/**
 * free_grid frees a 2d grid
 * @grid: pointer to 2d grid
 * @height: height of 2d array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}	
	free(grid);
}
