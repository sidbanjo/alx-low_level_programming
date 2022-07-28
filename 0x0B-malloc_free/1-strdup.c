#include "main.h"

/**
 * _strdup - allocates space in memory to store a string
 * @str: string to store in memory
 *
 * Return: pointer to allocated memory, NULL if str = NULL or failure
 */
char *_strdup(char *str)
{
	int size;
	char *c;
	int i;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		continue;
	c = malloc((size + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		c[i] = str[i];
	}
	c[i] = '\0';
	return (c);
}
