#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - allocates 2 dimensional array of integers
 *@width: length of y axis
 *@height: length of x axis
 *
 *Return: pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **g;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(g[j]);
			}
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}

