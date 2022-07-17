#include <stdio.h>

/**
 * reverse_array - reverse content of array of int
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int end = n - 1;
	int i = 0;
	int rev_arr[sizeof(a)];

	printf("rev_arr size = %lu. ", sizeof(rev_arr));
	while (end >= 0)
	{
		*(rev_arr + i) = a[end];
		i++;
		end--;
	}
	for (i = 0; i < n; i++)
	{
		*(a + i) = *(rev_arr + i);
	}
}
