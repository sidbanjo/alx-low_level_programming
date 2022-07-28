#include "main.h"

/**
 * main - prints sum of even fibonacci numbers upto 4,000,000
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int i;
	unsigned long int sum;
	unsigned long int fib = 0;
	unsigned long int prev = 2;
	unsigned long int upp = 1;

	for (i = 1; fib <= 4000000; i++)
	{
		if (i < 3)
			printf("%d", i);
		else
		{
			fib = prev + upp;
			upp = prev;
			prev = fib;
			if (fib % 2 == 0)
				sum += fib;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
