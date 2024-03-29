#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function
 * @grid: argument
 * @height: argument
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL ||  height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[(height - 1) - i]);
	}

	free(grid);
}
