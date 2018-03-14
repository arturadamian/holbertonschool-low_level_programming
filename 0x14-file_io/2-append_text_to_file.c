#include "holberton.h"


/**
 * append_text_to_file - appends text to the end of the file
 * @filename: pointer to a file
 * @text_content: string
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rd, wr, l;

	if (filename == NULL)
		return (-1);
	rd = open(filename, O_WRONLY | O_APPEND);
	if (rd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[l])
		l++;
	wr = write(rd, text_content, l);
	if (wr == -1)
		return (-1);
	close(rd);
	return (1);
}
