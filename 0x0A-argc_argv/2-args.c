#include <stdio.h>

/**
 * main - prints all args
 * @argc: count of args
 * @argv: args
 *
 * Return: 0 to exit program
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
