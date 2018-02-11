#include <stdio.h>
#include <stdlib.h>


/**
 * main - add positive numbers
 * @argc: counter
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > '9' || *argv[i] < '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
