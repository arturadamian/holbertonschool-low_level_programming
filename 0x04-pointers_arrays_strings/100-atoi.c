#include "holberton.h"


/**
 * _atoi - converts a string to an integer
 * @s: pointer to a string
 *
 * Return: the value
 */
int _atoi(char *s)
{
	int i = 0;
	int a = 1;
	int b = 0;
	unsigned int c = 1;
	unsigned int v = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			a *= -1;
		i++;
	}
	if (s[i] >= '0' && s[i] <= '9')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			i++;
			b++;
		}
		i -= 1;
		while (b > 0)
		{
			v += (s[i] - 48) * c;
			c *= 10;
			b--;
			i--;
		}
	}
	else
		return (0);
	v *= a;
	return (v);
}
