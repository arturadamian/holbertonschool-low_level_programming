#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, z;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (x = 0; s1[x]; x++)
		;
	for (y = 0; s2[y]; y++)
		;
	if (n == y || n > y)
	{
		s = malloc(x * sizeof(char) + (y + 1) * sizeof(char));
		z = y;
	}
	else
	{
		s = malloc(x * sizeof(char) + n + 1);
		z = n;
	}
	if (s == 0)
		return (NULL);
	for (x = 0; s1[x]; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; y < z; y++)
	{
		s[x + y] = s2[y];
	}
	s[x + y] = '\0';
	return (s);
}
