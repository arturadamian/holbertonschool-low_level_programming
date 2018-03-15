#include "holberton.h"


/**
 * error - print the error msg and exit
 * @err: parameter
 */
void error(int err, ...)
{
	va_list list;

	va_start(list, err);
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s", va_arg(list, char *));
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s", va_arg(list, char *));
		exit(99);
	}
	if (err == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d", va_arg(list, int));
		exit(100);
	}
	va_end(list);
}

/**
 * main - copies the content of a file to another
 * @argc: argfuments
 * @argv: array
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wr, close_f;
	char *buf[1024];

	if (argc != 3)
		error(97);
	if (argv[1] == NULL)
		error(98, argv[1]);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error(98, argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error(99, argv[2]);
	do {
		rd = read(fd1, buf, 1024);
		if (rd == -1)
			error(98, argv[1]);
		wr = write(fd2, buf, rd);
		if (wr == -1)
			error(99, argv[2]);
	} while (rd == 1024);
	close_f = close(fd1);
	if (close_f == -1)
		error(100, fd1);
	close_f = close(fd2);
	if (close_f == -1)
		error(100, fd2);
	return (0);
}
