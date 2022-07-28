#include "main.h"
/**
 * main - prints sum of multiples of 3 and 5 below 1024
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
