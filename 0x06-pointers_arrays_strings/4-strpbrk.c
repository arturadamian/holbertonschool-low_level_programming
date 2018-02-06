#include "holberton.h"


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: substring
 *
 * Return: pointer to yhe byte in s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (0);
}
