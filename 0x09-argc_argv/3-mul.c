#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: counter
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	for (i = 0; i < argc; i++)
		;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
