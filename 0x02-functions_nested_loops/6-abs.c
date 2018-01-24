#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: first parameter
 * Return: the absolute value of an integer
 */
int _abs(int c)
{
	if (c < 0)
		c = c * -1;
	else
		c = c * 1;
	return (c);
}
