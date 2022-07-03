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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(lo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	
	return (0);
}
