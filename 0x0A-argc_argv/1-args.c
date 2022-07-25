#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: count of args
 * @argv: args
 *
 * Return: 0 to exit program
 */
int main(int argc, char **argv)
{
	printf("%d\n", --argc);
	(void)argv;
	return (0);
}
