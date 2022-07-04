#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char letters[25] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar((char) letters[i]);
	}
	return (0);
}
