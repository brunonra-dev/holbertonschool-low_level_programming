#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created alloc_grid.
 *
 * @grid: 2d array.
 * @height: height of array.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
