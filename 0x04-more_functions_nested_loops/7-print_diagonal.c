#include "main.h"

/**
 * print_diagonal- prints a diagonal line
 * @n: lenght of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int c;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
