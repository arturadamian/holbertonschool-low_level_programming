#include "holberton.h"


/**
 * leet - encodes the string into 1337
 * @s: pointer to a string
 *
 * Return: result
 */
char *leet(char *s)
{
	int i;
	int c;
	char x[] = "aeotlAEOTL";
	char y[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; x[c] != '\0'; c++)
			if (s[i] == x[c])
				s[i] = y[c];
	}
	return (s);
}
