#include <stdio.h>

/**
 * main - print number of base 16
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
