#include "holberton.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointerb to a substring
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{	a++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (a);
	}
	return (a);
}
