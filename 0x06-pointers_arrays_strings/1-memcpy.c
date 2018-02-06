#include "holberton.h"


/**
 * _memcpy - copies memory area
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: first parameter
 *
 * Return: the result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
