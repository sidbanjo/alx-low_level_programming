#include "dog.h"

/**
 * init_dog - initializes a struct variable
 * @d: variable of type struct
 * @name: element in struct
 * @age: element in struct
 * @owner: element in struct
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
