#include "dog.h"

/**
 * free_dog - frees memory allocated to dog struct
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
