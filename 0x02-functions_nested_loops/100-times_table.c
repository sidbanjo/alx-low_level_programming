#include "main.h"

/**
 * print_times_table- prints out n multiplication table
 * @n: table of n
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, mul;

	if (n < 0 || n > 15)
	{ }
	else
	{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mul = x * y;
			if (y == 0)
			{ }
			else
			{
				_putchar(',');
				if (mul > 99)
					_putchar(' ');
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (mul < 10)
					_putchar(' '); }
			if (mul < 10)
				_putchar(mul + '0');
			else
			{
				if (mul > 99)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul / 10) % 10 + '0');
					_putchar(mul % 10 + '0'); }
				else
				{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0'); }}}
		_putchar('\n'); }}}
