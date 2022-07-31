#include "main.h"

/**
 * _calloc -allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		m[i] = 0;
	m[i] = '\0';
	return (m);
}
