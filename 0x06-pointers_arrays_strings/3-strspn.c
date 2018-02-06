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
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] == ' ' ||
		      s[i] == '\t' || s[i] == '.' || s[i] == '}' ||
		      s[i] == ',' || s[i] == ';' || s[i] == '!' ||
		      s[i] == '?' || s[i] == '"' || s[i] == '\n' ||
		      s[i] == '(' || s[i] == ')' || s[i] == '{'))
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					a++;
			}
		}
		else
			break;
	}
	return (a);
}
