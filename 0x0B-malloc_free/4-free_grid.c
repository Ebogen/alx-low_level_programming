#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the two dimensional grid created earlier
 * @grid: a parameter
 * @height: a parameter to a ointer
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
