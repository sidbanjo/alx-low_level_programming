#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write to file
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content){
	int myfile, i, count;

	if (filename == NULL)
		return (-1);
	myfile = open(filename, O_APPEND);
	if (myfile == -1)
		return (-1);
	if (text_content == NULL)
	{ }
	else
	{
		for (i = 0; text_content[i]; i++)
		{ }
		count = write(myfile, text_content, i);
		if (count < i || count == -1)
		{
			return (-1);
		}
	}
	return (1);
}
