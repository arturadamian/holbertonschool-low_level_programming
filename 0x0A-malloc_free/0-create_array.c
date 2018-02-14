#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: initializer
 *
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));

	if (size == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
