#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>


/**
 * array_range - creates an array of ints
 * @min: first int
 * @max: last int
 *
 * Return: a pointer or NULL
 */
int *array_range(int min, int max)
{
	int *p, i, len;

	if (min > max)
		return (NULL);
	len = (max - min + 1);
	p = malloc(sizeof(int) * len);
	if (p == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
