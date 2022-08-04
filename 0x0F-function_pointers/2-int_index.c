#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integer pointers
 * @size: size of array
 * @cmp: function to search
 *
 * Return: index of element searched, otherwise -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
	{
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
