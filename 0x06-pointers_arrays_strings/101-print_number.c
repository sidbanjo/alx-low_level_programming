#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int x = 10;

	if (n == 0)
	{
		_putchar('0' + n);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		while (n / x > 9)
			x *= 10;
		while (x > 0)
		{
			_putchar('0' + ((n / x) % 10));
			x /= 10;
		}
	}
}
