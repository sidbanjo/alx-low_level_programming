#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of integers
 * @n: number of integers
 *
 * Return: sum,othrwise 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		return (sum);
	}
	va_end(ap);
}
