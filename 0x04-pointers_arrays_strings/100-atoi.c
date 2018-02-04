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
	int num = 1;
	unsigned int val = 0;

	while (*s)
	{
		if (s[i] == '-')
			num *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			val *= 10 + s[i] - 48;
		if (s[i] < '0' || s[i] > '9')
			break;
		s++;
	}
	return (val);
}
