#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: counter
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	for (argc = 0; argv[argc] != '\0'; argc++)
		;
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
