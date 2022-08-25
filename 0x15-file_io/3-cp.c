#include "main.h"

/**
 * err - handle error messages and exit
 * @exitno: code to exit with
 * @message: error message to print
 * @file: name of file
 *
 * Return: void
 */
void err(int exitno, char *message, char *file)
{
	dprintf(1, message, file);
	exit(exitno);
}

/**
 * main - copies content of a file to another
 * @argc: number of args
 * @argv: arguments
 *
 * Return: 0 on success, otherwise exit with error number
 */
int main(int argc, char **argv)
{
	int file1, file2, check, count;
	char *buf;

	if (argc != 3)
		err(97, "usage: cp file_from file_to\n", NULL);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		err(98, "Error: Can't read from file %s\n", argv[1]);
	buf = malloc(1024);
	if (buf == NULL)
		return (-1);
	check = read(file1, buf, 1024);
	if (check == -1)
		err(98, "Error: Can't read from file %s\n", argv[1]);
	check = close(file1);
	if (check == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file2 == -1)
		err(99, "Error: Can't write to %s\n", argv[2]);
	for (count = 0; buf[count]; count++)
	{ }
	check = write(file2, buf, count);
	if (check == -1)
		err(99, "Error: Can't write to %s\n", argv[2]);
	check = close(file2);
	free(buf);
	if (check == -1)
	{
		dprintf(1, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	return (0);
}
