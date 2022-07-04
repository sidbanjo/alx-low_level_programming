#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return - 0 to exit program
 */
int main(void)
{
	char alpha_list[26];
	int var;

	for (var=97;var<=122;var++)
	{
		putchar(alpha_list[var]);
	}
	putchar("\n")
	return (0);
}
