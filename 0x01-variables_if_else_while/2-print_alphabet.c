#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return - 0 to exit program
 */
int main(void)
{
	char alpha_list[26];
	int var=97;
	char letters[];

	while (alpha_list[var]!="\0")
	{
		putchar(alpha_list[var], *letters);
		var++;
	}
	putchar((char)letters"\n");
	return (0);
}
