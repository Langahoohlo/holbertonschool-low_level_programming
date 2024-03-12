#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: argument
 * @height: argument
 * Return: grid
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