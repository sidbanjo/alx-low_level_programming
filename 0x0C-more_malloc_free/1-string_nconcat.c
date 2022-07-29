#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: pointer to memory of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	long int size1;
	long int size2;
	int i;
	int x;
	char *c;

	if (*s1 == NULL)
		size1 = 2;
	else
		size1 = sizeof *s1;
	if (*s2 == NULL)
		size2 = 2;
	else
	{
		if (n > sizeof *s2 - 1)
			size2 = sizeof *s2 - 1;
		else
			size2 = n;
	}
	c =  malloc(size1 + size2);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		c[i] = s1[i];
	for(x = 0; x < size2; x++)
		c[i] = s2[x];
	c[i] = '\0';
	return (c);
}
