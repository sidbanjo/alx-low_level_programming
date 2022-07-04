#include <stdio.h>

/**
 * main - printing alphabets in lower and upper case
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar((char) *"\n");
	return (0);
}
