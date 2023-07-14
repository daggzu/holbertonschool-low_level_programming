#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Free the grid
  * @grid: the address of the 2d grid
  * @height: height of the grid
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}
