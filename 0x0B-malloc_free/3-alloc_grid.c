#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, h;

	if (width > 0 && height > 0)
	{
		grid = malloc(8 * height);

		if (grid == 0)
			return (NULL);

		for (i = 0; i < width; i++)
		{
			grid[i] = malloc(4 * width);
			if (grid[i] == 0)
				return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			for (h = 0; h < height; h++)
				grid[j][h] = 0;
		}

		return (grid);
	}
	else
		return (NULL);

}
