#include <stdio.h>

/**
 * main - prints the name of source file
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
