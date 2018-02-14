#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - 2-dimensional array of integer
 * @width: colomn
 * @height: row
 *
 * Return: pointer to an array or NULL
 */
int **alloc_grid(int width, int height)
{
	int x, y, **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == 0)
		{
			for (; x >= 0; x--)
				free(p[x]);
			free(p);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}
	return (p);
}
