#include <stdio.h>
#include "main.h"

/**
 * main - checks lower cases in letters
 *
 * Return: 0 to exit program
 */
int main (void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
