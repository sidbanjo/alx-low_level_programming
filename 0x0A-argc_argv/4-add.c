#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	unsigned long int x;
	int check_digit;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; x <	strlen(argv[i]); x++)
		{
			if (*(argv[i] + x) >= 48 && *(argv[i] + x) <= 57)
				check_digit = 1;
			else
			{
				check_digit = 0;
				break;
			}
		}
		if (check_digit == 1)
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
