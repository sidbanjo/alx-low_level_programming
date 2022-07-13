#include "main.h"

/**
 * puts2 - prints every other character starting from first
 * @str: pointer to string to print characters
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
