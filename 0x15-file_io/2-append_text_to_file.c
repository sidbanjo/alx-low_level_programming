#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write to file
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int myfile, i, check;

	if (filename == NULL)
		return (-1);
	myfile = open(filename, O_APPEND | O_RDWR);
	if (myfile == -1)
		return (-1);
	if (text_content == NULL)
	{ }
	else
	{
		for (i = 0; text_content[i]; i++)
		{ }
		check = write(myfile, text_content, i);
		if (check == -1)
			return (-1);
	}
	check = close(myfile);
	if (check == -1)
		return (-1);
	return (1);
}
