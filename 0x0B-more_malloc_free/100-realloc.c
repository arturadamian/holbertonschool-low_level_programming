#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block using malloc & free
 * @ptr: the pointer to a previous memory
 * @old_size: the size in bytes ptr
 * @new_size: the size in bytes for a new memory
 *
 * Return: a poiunter
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	char *p;
	unsigned int a;

	p = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			c[a] = p[a];
		return (c);
	}
	free(ptr);
	return (c);
}
