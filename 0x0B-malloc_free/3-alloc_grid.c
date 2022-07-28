#include "main.h"

/**
 * alloc_grid - allocates memory for 2 dimensional array
 * @width: num of columns
 * @height: num of rows
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int h, w, i;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);
	a = (int**)malloc(height * sizeof(int*));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int*)malloc(width * sizeof(int));
		if (a[i] == NULL)
			return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			a[h][w] = 0;
		}
	}
	return (a);
}
