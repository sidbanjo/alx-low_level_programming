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
	unsigned long int fib = 2;
	unsigned long int prev = 2;
	unsigned long int upp = 1;

	for (i = 0; fib <= 4000000; i++)
	{
		if (fib % 2 == 0)
			sum += fib;
		fib = prev + upp;
		upp = prev;
		prev = fib;
	}
	printf("%lu\n", sum);
	return (0);
}
