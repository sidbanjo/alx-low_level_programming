#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
