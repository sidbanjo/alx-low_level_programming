#include "main.h"

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int i;
	unsigned long int fib;
	unsigned long int prev = 2;
	unsigned long int upp = 1;

	for (i = 1; i <= 50; i++)
	{
		if (i < 3)
			printf("%d", i);
		else
		{
			fib = prev + upp;
			upp = prev;
			prev = fib;
			printf("%lu", fib);
		}
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
