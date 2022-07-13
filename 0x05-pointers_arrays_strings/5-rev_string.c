#include "main.h"

/**
 * rev_string - reverses the string order
 * @s: pointer to string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int max = strlen(s) - 1;
	int i;
	char c[20];

	for (i = 0; i <= max; i++)
	{
		c[max - i] = *(s + i);
	}
	for (i = 0; i <= max; i++)
	{
		*(s + i) = c[i];
	}
}
