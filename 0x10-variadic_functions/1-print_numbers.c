#include "variadic_functions.h"

/**
 * print_numbers - prints separator-spaced integers
 * @separator: separator to space integers
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				if (separator != NULL)
				{
					printf("%s", separator);
				}
			}
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
