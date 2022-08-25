#include "main.h"

/**
 * read_textfile - prints to POSIX standard output
 * @filename: file to print
 * @letters: size of buffer
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int myfile, i, check;
	ssize_t count;
	char *ptr;

	if (filename == NULL)
		return (0);
	myfile = open(filename, O_RDONLY);
	if (myfile == -1)
		return (0);
	ptr = malloc(letters);
	if (ptr == NULL)
		return ('\0');
	check = read(myfile, ptr, letters);
	if (check == -1)
		return (0);
	check = close(myfile);
	if (check == -1)
		return (0);
	for (i = 0; ptr[i]; i++)
	{ }
	count = write(1, ptr, i);
	if (count == -1)
		return (0);
	if ((size_t)count < letters)
		return (0);
	free(ptr);
	return (count);
}
