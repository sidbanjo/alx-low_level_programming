#include <stdio.h>

/**
 * main - printing alphabets in lower and upper case
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char letters[53] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
	{
		putchar((char) letters[i]);
	}
	return (0);
}
