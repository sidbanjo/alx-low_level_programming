#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of bytes to allocate
 *
 * Return: pointer to memory, otherwise 98 if failure
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		return (98);
	}
	return (m);
}
