#include "main.h"

/**
 * read_textfile - prints o POSIX standard output
 * @filename: file to print
 * @letters: size of buffer
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int myfile, i;
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
	read(myfile, ptr, letters);
	close(myfile);
	for (i = 0; ptr[i]; i++)
	{ }
	count = write(1, ptr, i);
	if (count < i || count == -1)
		return (0);
	free(ptr);
	return (count);
}
