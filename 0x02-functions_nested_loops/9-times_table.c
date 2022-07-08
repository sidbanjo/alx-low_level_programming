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

	for (x = '0'; x <= '9'; x ++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			_putchar(x * y);
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
