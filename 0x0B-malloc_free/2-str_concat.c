#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	int i1, i2, n;
	char *c;

	for (i1 = 0; s1[i1]; i1++)
		continue;
	for (i2 = 0; s2[i2]; i2++)
		continue;
	size = i1 + i2;
	c = malloc(size * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (n = 0; n < i1; n++)
		c[n] = s1[n];
	for (n = 0; n < i2; n++)
		c[n + i1] = s2[n];
	c[n + i1] = '\0';
	return (c);
}
