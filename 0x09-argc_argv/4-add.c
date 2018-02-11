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
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
