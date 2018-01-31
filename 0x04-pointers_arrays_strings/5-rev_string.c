#include "holberton.h"


/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int a;
	int b = 0;
	char temp;

	for (a = 0; s[a] != '\0'; a++)
		;
	a -= 1;
	while (a > b)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
		b++;
		a--;
	}
}
