#include "main.h"

/**
 * rev_string - reverses the string order
 * @s: pointer to string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	char *c = s;
	int n, count = 0;

	while (*s != '\0')
	{
		count++;
		s = s + 1;
	}
	s = c;
	for (n = 0; n <= (count / 2); n++)
	{
		temp = s[n];
		s[n] = s[count - 1];
		s[count - 1] = temp;
		count = count - 1;
	}
}
