#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: variable to compute last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int x;

	x = i % 10;
	_putchar(x);
	return (x); 
}
