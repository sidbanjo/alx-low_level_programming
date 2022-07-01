#include <stdio.h>

/**
 * main - prints size of various types
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int lo;
	float f;

	printf("Size of a char: %u byte(s)\n" sizeof(char));
	printf("Size of an int: %u byte(s)\n" sizeof(int));
	printf("Size of a long: %u byte(s)\n" sizeof(long));
	printf("Size of a long long: %u byte(s)\n" sizeof(long long));
	printf("Size of a float: %u byte(s)\n" sizeof(float));
}
