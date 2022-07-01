#include <stdio.h>

/**
 * main - prints size of various types
 *
 * Return: 0 to end the program
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int lo;
	float f;

	printf("Size of a char: %u byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (int)sizeof(i));
	printf("Size of a long: %u byte(s)\n", (int)sizeof(l));
	printf("Size of a long long: %u byte(s)\n", (int)sizeof(lo));
	printf("Size of a float: %u byte(s)\n", (int)sizeof(f));
	Return (0);
}
