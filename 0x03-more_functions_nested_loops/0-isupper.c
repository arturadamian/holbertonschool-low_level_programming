#include "holberton.h"
/**
 * _isupper - checks for uppercase letters
 * @c: first parameter
 * Return: 1 if upper 0 if lower
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
