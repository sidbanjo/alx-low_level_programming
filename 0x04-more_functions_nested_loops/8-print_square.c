#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int rows = size;
	int orSize = size;

	if (size > 0)
	{
		while (size--)
		{
			while (rows--)
			{
				_putchar(35);
			}
			_putchar(10);
			rows = orSize;
		}
	}
	else
		_putchar(10);
}
