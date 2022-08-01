#include <stdlib.h>
#include <stdio.h>

void rotate_2d_matrix(int **matrix)
{
  int i = 0;
  int j = 0;
  int x, y;
  int n = 3;
  int **rot_array;

  rot_array = malloc(sizeof(int *) * n);
  for (x = 0; x < n; x++)
    rot_array[x] = malloc(sizeof(int *) * n);
    
  for (x = 0; x < n; x++)
  {
    j = 0;
    for (y = n - 1; y >= 0; y--)
    {
      rot_array[i][j] = matrix[y][x];
      j++;
    }
    i++;
  }

  for (x = 0; x < n; x++)
  {
    for (y = 0; y < n; y++)
    {
      matrix[x][y] = rot_array[x][y];
    }
  }
}

int main(void)
{
	int i, x;
	int **matrix;
	
	matrix = malloc(sizeof(int *) * 3);
	for (i = 0; i < 3; i++)
		matrix[i] = malloc(sizeof(int *) * 3);
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[1][0] = 4;
	matrix[1][1] = 5;
	matrix[1][2] = 6;
	matrix[2][0] = 7;
	matrix[2][1] = 8;
	matrix[2][2] = 9;
	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 3; x++)
			printf("%d..", matrix[i][x]);
		printf("\n");
	}
	printf("\n");
	rotate_2d_matrix(matrix);
	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 3; x++)
			printf("%d..", matrix[i][x]);
		printf("\n");
	}
	return (0);
}
