#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of coins
 * @argc: number of args
 * @argv: args
 *
 * Return: 0 if success, otherwise 1 if error
 */
int main(int argc, char **argv)
{
	int coin = 0;
	int x;

	if (argc == 2)
	{
		x = atoi(argv[1]);
		if (x < 1)
			coin = 0;
		else
		{
		while (x)
		{
		if (x >= 25)
		{coin += x / 25;
			x %= 25; }
		else if (x >= 10)
		{coin += x / 10;
			x %= 10; }
		else if (x >= 5)
		{coin += x / 5;
			x %= 5; }
		else if (x >= 2)
		{coin += x / 2;
			x %= 2; }
		else
		{coin += x / 1;
			x %= 1; }
		}}
		printf("%d\n", coin);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
