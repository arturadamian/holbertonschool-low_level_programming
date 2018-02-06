#include "holberton.h"


/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a string
 * @b: constant byte
 * @n: amount of bytes
 *
 * Return: the result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
