#include "holberton.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a file
 * @letters: size of the buffer
 *
 * Return: the number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, wr;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	buf[rd + 1] = '\0';
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	free(buf);
	return (rd);
}
