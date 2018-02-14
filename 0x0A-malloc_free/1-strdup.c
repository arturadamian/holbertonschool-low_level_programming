#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - duplicate a string in an allocated memory
 * @str: pointer to a string
 *
 * Return: a pointer if success or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	x++;
	s = malloc(x * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
