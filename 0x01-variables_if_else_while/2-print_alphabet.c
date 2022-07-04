#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char letter[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar((char) letter[i]);
	}
	putchar((char) *"\n");
	return (0);
}
