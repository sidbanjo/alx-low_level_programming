#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: args
 *
 * Return: 0 if success, otherwise 1 if error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
