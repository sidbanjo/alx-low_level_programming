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
	unsigned int size1;
	unsigned int size2;
	unsigned int i, x;
	char *c;

	if (s1 == NULL)
		size1 = 2;
	else
	{
		for (size1 = 0; *(s1 + size1); size1++)
		{
		}
	}
	if (s2 == NULL)
		size2 = 2;
	else
	{
		for (size2 = 0; *(s2 + size2); size2++)
		{
		}
		if (n < size2)
			size2 = n;
	}
	c =  malloc(size1 + size2 + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		c[i] = s1[i];
	for (x = 0; x < size2; x++)
	{
		c[i] = s2[x];
		i++;
	}
	c[i] = '\0';
	return (c);
}
