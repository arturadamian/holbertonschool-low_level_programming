#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: bytes
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == 0)
		return (0);
	a = p;
	for (i = 0; i < nmemb; i++)
		a[i] = 0;
	return (p);
}
