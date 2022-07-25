#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiple of two numbers
 * @argc: number of arguments
 * @argv: numbers
 *
 * Return: 0 if success, otherwise 1 if error
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
