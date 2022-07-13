#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @src: source
 * @dest: destination
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;
	static char *p;

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}
	p = dest;
	return (p);
}
