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
	int i1, i2 = 0;
	int n;
	char *c;

	for (i1 = 0; s1[i1]; i1++)
		continue;
	for (i2 = 0; s2[i2]; i2++)
		continue;
	c = malloc((i1 + i2 + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	if (s1 == NULL)
		c[0] = "";
	else
	{
	for (n = 0; n < i1; n++)
		c[n] = s1[n];
	}
	if (s2 == NULL)
		c[n + i2] = "";
	else
	{
	for (n = 0; n < i2; n++)
		c[n + i1] = s2[n];
	}
	c[n + i1] = '\0';
	return (c);
}
