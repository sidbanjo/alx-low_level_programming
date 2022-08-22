#include "main.h"

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0 to exit program
 */
int main(void)
{
	unsigned long int i, k1, k2, j1, j2;
	unsigned long int fib;
	unsigned long int prev = 2;
	unsigned long int upp = 1;

	printf("%lu, %lu", upp, prev);
	for (i = 1; i < 91; i++)
	{
		fib = prev + upp;
		upp = prev;
		prev = fib;
		printf(", %lu", fib);
	}
	j1 = upp / 1000000000;
	j2 = upp % 1000000000;
	k1 = prev / 1000000000;
	k2 = prev % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
