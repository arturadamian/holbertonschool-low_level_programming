#include "holberton.h"


/**
 * _strlen - returns the length of a string.
 * @s: first parameter
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
