#include "main.h"

/**
 * times_table- prints out the multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int mul;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (y > 0)
			{
			if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			if (mul < 10)
				_putchar(mul + '0');
			else
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
