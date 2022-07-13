#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int point;
	int i;

	if (strlen(str) % 2 == 1)
	{
		len = (strlen(str) - 1) / 2;
	}
	else
	{
		len = strlen(str) / 2;
	}
	point = strlen(str) - len;
	for (i = 0; i < len; i++)
	{
		_putchar(*(str + point));
		point++;
	}
	_putchar('\n');
}
