#include "holberton.h"


/**
 * _strcat - concatenates two strings
 * @dest: pointer to a first string
 * @src: pointer to a second string
 *
 * Return: dest ( Returns a pointer to the resulting string )
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; src[a] != 0; a++)
		dest[i + a] = src[a];
	dest[i + a] = '\0';
	return (dest);
}
