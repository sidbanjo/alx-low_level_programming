#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - print sign of random number
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if n < 0
		printf("%d is negative\n", n);
	else if n == 0
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n)
	return (0);
}
