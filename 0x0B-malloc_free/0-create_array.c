#include "main.h"

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: character to assign to array
 *
 * Return: pointer to array of characters, NULL if size = o or failure
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	return (a);
}
