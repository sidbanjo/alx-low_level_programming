#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
