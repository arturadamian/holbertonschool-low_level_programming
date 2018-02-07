#include "holberton.h"


/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 *
 * Return: the addres of the sub in a string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[0])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if  (needle[i] != haystack[i + j])
					break;
			}
			if (needle[i] == '\0')
				return (haystack + j);
		}
	}
	return (0);
}
