#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: first parameter
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		c = 1;
	else
		c = 0;
	return (c);
}
