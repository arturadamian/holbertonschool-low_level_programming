#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = p(num1, num2);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		       exit(100);
	}
	printf("%d\n", result);
	return (0);
}
