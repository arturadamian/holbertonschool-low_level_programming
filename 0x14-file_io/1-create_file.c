#include "holberton.h"


/**
 * create_file - creates a file
 * @filename: file
 * @text_content: string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int rd, count = 0, wr;

	if (filename == NULL)
		return (-1);
	rd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (rd == -1)
		return (-1);
	while (text_content[count])
		count++;
	if (text_content)
	{
		wr = write(rd, text_content, count);
		if (wr == -1)
			return (-1);
	}
	close(rd);
	return (1);
}
