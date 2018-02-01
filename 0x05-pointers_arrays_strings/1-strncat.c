#include "holberton.h"


/**
 * _strncat - concatenates two strings
 * @dest: pointer to a first string
 * @src: pointer to a second string
 * @n: length of src
 * Return: dest (pointer to the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	for (i = 0; dest[i] != 0; i++)
		;
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[i + a] = src[a];
	return (dest);
}
