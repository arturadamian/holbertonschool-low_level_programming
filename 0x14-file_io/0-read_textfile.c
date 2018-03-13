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
	int ret;
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
	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);
	buf[ret] = '\0';
	printf("%s\n", buf);
	return (ret);
}
