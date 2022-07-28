#include "main.h"

/**
 * free_grid - frees allocated memory of 2d grid
 * @grid: 2d grid
 * @height: num of rows
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
