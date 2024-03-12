#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point of function
 * @width: argument
 * @height: argument
 *
 * Return: grid or nothing
 */

int **alloc_grid(int width, int height)
{
	int row, col, i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		for (col = row; col < height; row++)
		{
			free(grid[col]);
		}

		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
