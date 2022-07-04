#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (!(i == 'e' || i == 'q'))
		{
			putchar(i);
		}
	}
	putchar((char) *"\n");
	return (0);
}
