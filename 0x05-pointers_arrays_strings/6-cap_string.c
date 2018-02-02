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
		if ((s[i] > 96 && s[i] < 123) && (s[i - 1] == ' ' ||
		    s[i - 1] == '\t' || s[i - 1] == '.' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!' ||
		    s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '\n' ||
		    s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		    s[i - 1] == '}' || s[i - 1] == '0') )
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
