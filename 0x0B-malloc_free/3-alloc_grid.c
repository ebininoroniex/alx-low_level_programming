#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - check the code
 *
 *@width: an integer
 *@height: integer
 *
 *Return:return NULL on failure If width or height is 0
 *	or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = (int **)malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
