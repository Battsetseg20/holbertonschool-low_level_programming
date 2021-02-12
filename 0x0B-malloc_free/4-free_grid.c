#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: grid to free
 * @height: length of axis x of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
