#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int x, y;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (x = 0; s1[x]; x++)
		;
	for (y = 0; s2[y]; y++)
		;
	s = malloc(x * sizeof(char) + y * sizeof(char));
	if (s == 0)
		return (NULL);
	for (x = 0; s1[x]; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; s2[y]; y++)
	{
		s[x + y] = s2[y];
	}
	return (s);
}
