#include "holberton.h"



/**
 * cap_string - capitalize all the words of the string
 * @s: pointer to a string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '.' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '!' ||
		    s[i] == '?' || s[i] == '"' || s[i] == '\n' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
		{	i += 1;
			if (s[i] > 96 && s[i] < 123)
				s[i] = s[i] - 32;

			else if (s[i] == ' ' || s[i] == '\t' || s[i] == '.' ||
				 s[i] == ',' || s[i] == ';' || s[i] == '!' ||
				 s[i] == '?' || s[i] == '"' || s[i] == '\n' ||
				 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				 s[i] == '}')
			{
				i += 1;
				if (s[i] > 96 && s[i] < 123)
					s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
