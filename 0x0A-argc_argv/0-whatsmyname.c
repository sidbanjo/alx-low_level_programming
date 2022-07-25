#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 to exit program
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
