#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: print function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
	}
	else
	{
		f(name);
	}
}
