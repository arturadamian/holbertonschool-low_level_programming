#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to a string
 * @size: size of a string
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum0 = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += a[(i * size) + i];
		sum1 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sum0, sum1);
}
