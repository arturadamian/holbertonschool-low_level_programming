#include "holberton.h"


/**
 * _strchr - locates a charachter in a string
 * @s: pointer to a string
 * @c: a charachter
 *
 * Return: a pointer to a string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
		;
	if (s[i] != '\0')
	{
		s = s + i;
	}
	else
		return (0);
	return (s);
}
