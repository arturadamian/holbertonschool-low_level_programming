#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins to make change
 * @argc: counter
 * @argv: array
 *
 * Return: 0 (success) or 1
 */
int main(int argc, char *argv[])
{
	int i, cents, num = 0;
	int array[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		num += cents / array[i];
		cents %= array[i];
	}
	printf("%d\n", num);
	return (0);
}
