#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c, null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == '\0' && c == '\0')
		return (s + i);
	return (NULL);
}
