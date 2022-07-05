#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char i;

	for (i ='z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
