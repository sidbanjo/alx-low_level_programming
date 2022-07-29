#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of bytes to allocate
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit 98;
	}
	return (m);
}
