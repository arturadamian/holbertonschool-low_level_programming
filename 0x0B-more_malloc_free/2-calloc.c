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
	a = malloc(size * nmemb);
	p = a;
	if (a == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		a[i] = 0;
	return (p);
}
