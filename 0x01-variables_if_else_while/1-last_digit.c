#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * betty style doc for function main goes there
 * main - printast digit of rand number
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n_last = char n[-1];
	if (n_last > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, n_last);
	else if (n_last == 0)
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
			, n, n_last);	
	return (0);
}
