#include <stddef.h>

/**
 * array_iterator - executes a function on each element
 * @array: array of elements
 * @size: size of array in bytes
 * @action: fuction to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
