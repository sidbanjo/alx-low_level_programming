#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Returm: void
 */
void _puts_recursion(char *s)
{
	if (*(s + 0) == '\0')
		_putchar('\n');
	if (*(s + 0))
	{
		_putchar(*(s + 0));
		_puts_recursion(s + 1);
	}
}
