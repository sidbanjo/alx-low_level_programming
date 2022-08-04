#include "3-calc.h"

/**
 * main - prints the result of a simple operation
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(s))(a, b));
	return (0);
}
