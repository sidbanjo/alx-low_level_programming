#include "variadic_functions.h"

/**
 * print_strings - prints separator-spaced strings
 * @separator: separator to space integers
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

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
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
